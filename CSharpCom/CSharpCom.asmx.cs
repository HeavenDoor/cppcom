using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Services;
using CppComLib;
//using TestLib;

namespace CSharpCom
{
    /// <summary>
    /// Summary description for CSharpCom
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class CSharpCom : System.Web.Services.WebService
    {
        //IDTIncident
        //DTIncidentClass

        CppComLib.IComInterface com_Interface = new CppComLib.ComInterface();
       // com_Interface 
        [WebMethod]
        public string SayHelloToJava(string str)
        {
            

            int m = com_Interface.getdataEx(100);
            return "Hello JAVA WebService This is " + str + " Call";
        }
    }

}
