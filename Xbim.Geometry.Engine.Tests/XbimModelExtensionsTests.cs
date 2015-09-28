﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Xbim.Common.Geometry;
using Xbim.Ifc2x3.SharedBldgElements;
using Xbim.IO;
using Xbim.ModelGeometry.Scene.Extensions;

namespace GeometryTests
{
    [TestClass]
    [DeploymentItem(@"EsentTestFiles\")]
    [DeploymentItem(@"x64\", "x64")]
    [DeploymentItem(@"x86\", "x86")]
    [DeploymentItem(@"SolidTestFiles\", "SolidTestFiles")]
    public class XbimModelExtensionsTests
    {
        [TestMethod]
        public void CanGetRawGeometry()
        {
            var m = new XbimModel();
            m.Open("Monolith_v20.xBIM");
            var w1 = m.Instances.OfType<IfcWall>().FirstOrDefault();
            var msh = m.GetMesh(new[] {w1}, XbimMatrix3D.Identity);
            Assert.AreEqual(24, msh.PositionCount, "Unexpected value");
            m.Close();

            m.Open("Monolith_v10.xBIM");
            w1 = m.Instances.OfType<IfcWall>().FirstOrDefault();
            msh = m.GetMesh(new[] { w1 }, XbimMatrix3D.Identity);
            Assert.AreEqual(24, msh.PositionCount, "Unexpected value");
            m.Close();
        }
    }
}
