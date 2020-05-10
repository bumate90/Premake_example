-- premake5.lua
-- workspace is for Visual Studio developers
-- workspace=solution
workspace "nil"
   configurations { "Debug", "Release" }

project "Premake_example"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "**.h", "**.cpp" }

   includedirs {"./h"}
   
   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"
      buildoptions { "-Wall -Werror" }
      buildoptions { "-fsanitize=address" }
      buildoptions { "-fsanitize=undefined" }
      buildoptions { "-fsanitize=leak" }
      linkoptions { "-fsanitize=address" }
      linkoptions { "-fsanitize=undefined" }
      linkoptions { "-fsanitize=leak" }
      --linkoptions { "-lasan" }
      --linkoptions { "-lubsan" }
      --linkoptions { "-llsan" }

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"