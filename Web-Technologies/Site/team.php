<?php

    session_start();
    require 'includes/dbh.inc.php';
    
    define('TITLE',"The Team | CyberWarior");
    
    if(!isset($_SESSION['userId']))
    {
        header("Location: login.php");
        exit();
    }
    
    include 'includes/HTML-head.php';
?>  

        <link href="css/loader.css" rel="stylesheet">

        <link href="css/creator-portfolio.min.css" rel="stylesheet">
    </head>
    
    <body onload="pageLoad()" style="background: #f1f1f1">

      <div id="loader-wrapper">
        <img src='img/cyberwarior.png' id='loader-logo'>
            <div class="loader">
                <div class="loader__bar"></div>
                <div class="loader__bar"></div>
                <div class="loader__bar"></div>
                <div class="loader__bar"></div>
                <div class="loader__bar"></div>
                <div class="loader__ball"></div>
            </div>
        </div> 

         <script>
            var myVar;

            function pageLoad() {
              myVar = setTimeout(showPage, 4000);
            }

            function showPage() {
              document.getElementById("loader-wrapper").style.display = "none";
              document.getElementById("content").style.display = "block";
            }
        </script>  

        <?php include 'includes/navbar.php'; ?>
   

        <div class="jumbotron text-white" style="background-image: url('img/team-cover.png')">
            <div class="container">
              <h1 class="display-3">CyberWarior Creators</h1>
              <h4>The Brains and Brawns behind all this</h4>
              <h1><a href="https://github.com/kuguvegaa">
                      <i class="fa fa-github" aria-hidden="true"></i>
                  </a> &raquo;</h1>
            </div>
        </div>

        
      <div class="container">
        
        <section class="content-section" id="portfolio">
            
          <div class="container">
              
            <div class="content-section-heading text-center">
              <h3 class="text-secondary mb-0">The Minds Behind CyberWarior</h3>
              <h2 class="mb-5">The Team</h2>
            </div>
            <div class="row no-gutters">
              <div class="col-lg-6">
                  <a class="portfolio-item" href="aboutUs/yavuz_cicek.php" target="_blank">
                  <span class="caption">
                    <span class="caption-content">
                      <h2 style="font-size: 20px; height: 400px;">Yavuz Çiçek</h2>
                      <p class="mb-0 text-white"></p>
                    </span>
                  </span>
                  <img class="img-fluid" src="img/profile.jpg" alt="">
                </a>
              </div>
                </a>
              </div>
            </div>
          </div>
        </section>
          

      </div>
        
        <?php include 'includes/footer.php'; ?>
        
	<script src="js/jquery.min.js"></script>
	<script src="js/bootstrap.min.js"></script>
    </body>
</html>