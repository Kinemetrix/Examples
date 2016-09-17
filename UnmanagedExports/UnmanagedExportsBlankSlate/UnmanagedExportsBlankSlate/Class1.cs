using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using RGiesecke.DllExport; //install UnmanagedExports from NuGet then verify that it shows up in packages.config before adding this namespace.

namespace UnmanagedExportsBlankSlate
{
    public class Class1
    {
        [DllExport] //export this static function.
        static void CSFunction()
        {
            Console.WriteLine("TEXT_FROM_C#_DLL");  //when the static function is called from a console app, this text will appear.
        }
    }
}
