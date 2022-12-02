diff --git a/app/assets/javascripts/diffs/components/diff_table_cell.vue b/app/assets/javascripts/diffs/components/diff_table_cell.vue
index fd04310201551c083f1be5c3effc209710a796b2..5b08b16111407d8319c4c7293cee80fcd2188108 100644
--- a/app/assets/javascripts/diffs/components/diff_table_cell.vue
+++ b/app/assets/javascripts/diffs/components/diff_table_cell.vue
@@ -11,11 +11,8 @@ import {
   LINE_HOVER_CLASS_NAME,
   LINE_UNFOLD_CLASS_NAME,
   INLINE_DIFF_VIEW_TYPE,
-<<<<<<< HEAD
   LINE_POSITION_LEFT,
   LINE_POSITION_RIGHT,
-=======
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
 } from '../constants';
 
 export default {
@@ -70,7 +67,6 @@ export default {
   computed: {
     ...mapGetters(['isLoggedIn']),
     normalizedLine() {
-<<<<<<< HEAD
       let normalizedLine;
 
       if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
@@ -79,10 +75,6 @@ export default {
         normalizedLine = this.line.left;
       } else if (this.linePosition === LINE_POSITION_RIGHT) {
         normalizedLine = this.line.right;
-=======
-      if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
-        return this.line;
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
       
.dataTables_wrapper {
	border-radius: 20px;
	-webkit-border-radius: 20px;
	-moz-border-radius: 20px;
	width: 88%;
	margin: 20px auto 0 auto;
	padding: 25px;
	background-color: white;
	position: relative;
	min-height: 155px;
	clear: both;
	_height: 302px;
	zoom: 1; /* Feeling sorry for IE */
}
.dataTables_processing {
	position: absolute;
	top: 50%;
	left: 50%;
	width: 20px;
	height: 30px;
	margin-left: -125px;
	margin-top: -15px;
	padding: 14px 0 2px 0;
	border: 1px solid #ddd;
	text-align: center;
	color: #999;
	font-size: 14px;
	background-color: white;
}

.dataTables_length {
	width: 40%;
	float: left;
}

.dataTables_filter {
	width: 50%;
	float: right;
	text-align: right;
	margin-bottom: 15px;
}

.dataTables_info {
	width: 50%;
	float: left;
	background-color: white;
	font-weight: bold;
}

.dataTables_paginate {
	width: 42px;
	* width: 50px;
	float: right;
	text-align: right;
	background-color: white;
}
/* Pagination nested */
.paginate_disabled_previous, .paginate_enabled_previous, .paginate_disabled_next, .paginate_enabled_next {
	height: 19px;
	width: 19px;
	margin-left: 3px;
	float: left;
}

.paginate_disabled_previous {
	background-image: url('../images/back_disabled.jpg');
}

.paginate_enabled_previous {
	background-image: url('../images/back_enabled.jpg');
}

.paginate_disabled_next {
	background-image: url('../images/forward_disabled.jpg');
}

.paginate_enabled_next {
	background-image: url('../images/forward_enabled.jpg');
}



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * DataTables display
 */
table.display {
	margin: 20px auto; 
	clear: both;
	
	/* Note Firefox 3.5 and before have a bug with border-collapse
	 * ( https://bugzilla.mozilla.org/show%5Fbug.cgi?id=155955 ) 
	 * border-spacing: 0; is one possible option. Conditional-css.com is
	 * useful for this kind of thing
	 *
	 * Further note IE 6/7 has problems when calculating widths with border width.
	 * It subtracts one px relative to the other browsers from the first column, and
	 * adds one to the end...
	 *
	 * If you want that effect I'd suggest setting a border-top/left on th/td's and 
	 * then filling in the gaps with other borders.
	 */
}

table.display thead th {
	padding: 3px 18px 3px 10px;
	background-color: white;
	font-weight: bold;
	font-size: 16px;
	cursor: pointer;
	* cursor: hand;
}

table.display tfoot th {
	padding: 3px 18px 3px 10px;
	border-top: 1px solid black;
	font-weight: bold;
}

table.display tr.heading2 td {
	border-bottom: 1px solid #aaa;
}

table.display td {
	padding: 3px 10px;
	font-size: 16px;
}

table.display td.center {
	text-align: center;
}
.sorting_asc {
	background: url('../images/sort_asc.png') no-repeat center right;
}
.sorting_desc {
	background: url('../images/sort_desc.png') no-repeat center right;
}
.sorting {
	background: url('../images/sort_both.png') no-repeat center right;
}
.sorting_asc_disabled {
	background: url('../images/sort_asc_disabled.png') no-repeat center right;
}
.sorting_desc_disabled {
	background: url('../images/sort_desc_disabled.png') no-repeat center right;
}
table.display tr.odd.gradeA {
	background-color: #ddffdd;
}
table.display tr.even.gradeA {
	background-color: #ddffdd;
}
table.display tr.odd.gradeC {
	background-color: #ddddff;
}
table.display tr.even.gradeC {
	background-color: #ddddff;
}

table.display tr.odd.gradeX {
	background-color: #ffdddd;
}
table.display tr.even.gradeX {
	background-color: #ffdddd;
}

table.display tr.odd.gradeU {
	background-color: #ddd;
}

table.display tr.even.gradeU {
	background-color: #eee;
}


table.display tr.odd.gradeZ {
	background-color: #FCFAFA;
}

table.display tr.even.gradeZ {
	background-color: white;
}





/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Misc
 */
.dataTables_scroll {
	clear: both;
}

.dataTables_scrollBody {
	*margin-top: -1px;
}

.top, .bottom {
	padding: 15px;
	background-color: #F5F5F5;
	border: 1px solid #CCCCCC;
}

.top .dataTables_info {
	float: none;
}

.clear {
	clear: both;
}

.dataTables_empty {
	font-size: 24px;
	text-align: center;
	vertical-align: middle;
	background-color: white; 
	height: 50px;
	width: 90%;
}

tfoot input {
	margin: 0.5em 0;
	width: 100%;
	color: #444;
}

tfoot input.search_init {
	color: #999;
}

td.group {
	background-color: #d1cfd0;
	border-bottom: 2px solid #A19B9E;
	border-top: 2px solid #A19B9E;
}

td.details {
	background-color: #d1cfd0;
	border: 2px solid #A19B9E;
}

.paging_full_numbers,
        .paging_simple_numbers {
	width: 400px;
	height: 22px;
	line-height: 22px;
}

.paging_full_numbers span.paginate_button,
 	.paging_full_numbers span.paginate_active,
        .paging_simple_numbers span.paginate_button,
        .paging_simple_numbers span.paginate_active {
	border: 1px solid #aaa;
	-webkit-border-radius: 5px;
	-moz-border-radius: 5px;
	padding: 2px 5px;
	margin: 0 3px;
	cursor: pointer;
	*cursor: hand;
}

.paging_full_numbers span.paginate_button,
        .paging_simple_numbers span.paginate_button {
	background-color: #fff;
}

.paging_full_numbers span.paginate_button:hover,
        .paging_simple_numbers span.paginate_button:hover {
	background-color: #ccc;
}

.paging_full_numbers span.paginate_active,
        .paging_simple_numbers span.paginate_active {
	background-color: #99B3FF;
}

table.display tr.even.row_selected td {
	background-color: #B0BED9;
}

table.display tr.odd.row_selected td {
	background-color: #9FAFD1;
}

div.box {
	height: 100px;
	padding: 10px;
	overflow: auto;
	border: 1px solid #8080FF;
	background-color: #E5E5FF;
}
background-color: red;
background-color: indigo;

/* Hexadecimal value */
background-color: #bbff00; /* Fully opaque */
background-color: #bf0; /* Fully opaque shorthand */
background-color: #11ffee00; /* Fully transparent */
background-color: #1fe0; /* Fully transparent shorthand */
background-color: #11ffeeff; /* Fully opaque */
background-color: #1fef; /* Fully opaque shorthand */
/* RGB value */
background-color: rgb(255, 255, 128); /* Fully opaque */
background-color: rgba(117, 190, 218, 0.5); /* 50% transparent */

/* HSL value */
background-color: hsl(50, 33%, 25%); /* Fully opaque */
background-color: hsla(
  50,
  33%,
  25%,
  0.75
); /* 72% opaque, i.e. 28% transparent */
/* Special keyword values */
background-color: currentcolor;
background-color: transparent;
/* Global values */
background-color: inherit;
background-color: initial;
background-color: revert;
background-color: revert-layer;
background-color: unset;
stages:
  - test
  - deploy
test:
  stage: test
  script:
    - 'echo "Testing Application: ${CI_PROJECT_NAME}"'
production:
  stage: deploy
  when: manual
  script:
    - 'echo "Deploying to ${CI_ENVIRONMENT_NAME}"'
  environment:
    name: ${CI_JOB_NAME}
	diff --git a/app/assets/javascripts/diffs/components/diff_table_cell.vue b/app/assets/javascripts/diffs/components/diff_table_cell.vue
index fd04310201551c083f1be5c3effc209710a796b2..5b08b16111407d8319c4c7293cee80fcd2188108 100644
--- a/app/assets/javascripts/diffs/components/diff_table_cell.vue
+++ b/app/assets/javascripts/diffs/components/diff_table_cell.vue
@@ -11,11 +11,8 @@ import {
   LINE_HOVER_CLASS_NAME,
   LINE_UNFOLD_CLASS_NAME,
   INLINE_DIFF_VIEW_TYPE,
-<<<<<<< HEAD
   LINE_POSITION_LEFT,
   LINE_POSITION_RIGHT,
-=======
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
 } from '../constants';
 
 export default {
@@ -70,7 +67,6 @@ export default {
   computed: {
     ...mapGetters(['isLoggedIn']),
     normalizedLine() {
-<<<<<<< HEAD
       let normalizedLine;
 
       if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
@@ -79,10 +75,6 @@ export default {
         normalizedLine = this.line.left;
       } else if (this.linePosition === LINE_POSITION_RIGHT) {
         normalizedLine = this.line.right;
-=======
-      if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
-        return this.line;
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Bootstrap demo</title>
  </head>
  <body>
    <h1>Hello, world!</h1>
  </body>
</html>
a:hover,body,h1,h2,h3{color:#333}code,pre,td,th{border:1px solid #ccc}p>code,textarea{padding:3px}a.btn,a:focus,a:hover{text-decoration:none}.logo,ul#grouplist{float:left}#grouplist span,#help-layer,.alert,.item p,.items .preview,.panel,pre{overflow:auto}@-ms-viewport{width:device-width}blockquote,body,figure,li,p,table,td,th,tr,ul{margin:0;padding:0;font-size:100%}table caption,td,th{padding-top:.5em;padding-bottom:.5em}body{padding-left:10px;padding-right:10px;margin:0 auto 30px;max-width:780px;font-family:"Helvetica Neue",Helvetica,Arial,sans-serif;text-rendering:optimizeLegibility}blockquote,q{font-family:Georgia,serif}a{color:#36C}a:focus{outline:0;color:red;border:1px dotted #aaa}h1,h2,h3{font-weight:400}a.btn,form h3,table caption{font-weight:700}h2{font-size:1.6em}h3{font-size:1.2em}h5,h6{margin:0;padding:0}blockquote{border-left:4px solid #ddd;padding-left:25px;margin-left:20px;margin-top:20px;margin-bottom:20px;color:#888;line-height:1.4em}q{color:purple;font-style:italic}blockquote+p{color:#555;font-style:italic}figcaption{font-size:.8em;text-transform:uppercase;color:#777}table{width:100%;border-collapse:collapse;border-spacing:0;table-layout:fixed}table caption{font-size:1em;text-align:left}td,th{padding-left:5px}th{text-align:left}code,pre{background:#fcfcfc;font-family:monospace;color:#666;line-height:1.3em;border-radius:5px}.item,.items .preview{font-family:Georgia,serif}pre{padding:10px}pre>code{border:none}form{padding-top:5px;padding-bottom:5px;padding-left:15px;border-left:2px dotted #ddd}form h3:first-child{margin-top:0}label{cursor:pointer;display:block}input[type=checkbox]{border:1px solid #ccc;margin-right:.5em}input[type=search],input[type=email],input[type=tel],input[type=password],input[type=number],input[type=text]{border:1px solid #ccc;padding:3px;line-height:15px;width:250px;font-size:99%;margin-bottom:10px;margin-top:5px;-webkit-appearance:none}.form-help,select{margin-bottom:15px}input[type=search]:focus,input[type=email]:focus,input[type=tel]:focus,input[type=password]:focus,input[type=number]:focus,input[type=text]:focus,textarea:focus{color:#000;border-color:rgba(82,168,236,.8);outline:0;box-shadow:0 0 8px rgba(82,168,236,.6)}input[type=number]{width:40px}textarea{border:1px solid #ccc;width:400px;height:200px;font-size:99%}::-webkit-input-placeholder{color:#bbb;padding-top:2px}::-ms-input-placeholder{color:#bbb;padding-top:2px}::-moz-placeholder{color:#bbb;padding-top:2px}.form-actions{margin-top:30px}input.form-error,textarea.form-error{border:2px solid #b94a48}.form-errors{color:#b94a48;margin-left:15px;list-style-type:none}.form-help{font-size:.9em;color:brown}.hide{display:none}#grouplist span{float:left;opacity:.4;min-width:4em;margin-right:6px;text-align:center}#grouplist input[type=text]{width:150px}#grouplist input[type=checkbox]+span,#grouplist input[type=text]{padding:4px;margin-top:6px;margin-bottom:0}#grouplist input[type=checkbox]:checked+span{opacity:1}ul#grouplist li{margin-left:0}.alert,.panel{padding:8px 35px 8px 14px;margin-bottom:20px;color:#c09853;background-color:#fcf8e3;border:1px solid #fbeed5;border-radius:4px}.alert-success{color:#468847;background-color:#dff0d8;border-color:#d6e9c6}.alert-error,.panel-danger{color:#b94a48;background-color:#f2dede;border-color:#eed3d7}.alert-info{color:#3a87ad;background-color:#d9edf7;border-color:#bce8f1}.alert-normal,.panel-default{color:#333;background-color:#f0f0f0;border-color:#ddd}.alert-error a,.panel-danger a{color:#b94a48}#grouplist span,.btn{-webkit-appearance:none;display:inline-block;color:#333;border:1px solid #ccc;background:#efefef;padding:3px 8px;font-size:1.1em;cursor:pointer;border-radius:2px}.btn-red{border-color:#b0281a;background:#d14836;color:#fff}.btn-red:focus,.btn-red:hover,a.btn-red:hover{color:#fff;background:#c53727}.btn-blue{border-color:#3079ed;background:#4d90fe;color:#fff}.btn-blue:focus,.btn-blue:hover{border-color:#2f5bb7;background:#357ae8}article .bookmark-icon,article .read-icon{color:#aaa!important;font-weight:200!important;text-decoration:none!important;font-size:1.7em;margin-left:15px}.items a,header a,nav .active a{text-decoration:none}article[data-item-bookmark="0"] .bookmark-icon:before{content:"☆"}article[data-item-bookmark="1"] .bookmark-icon:before{content:"★"}article[data-item-status=read] .read-icon:before{content:"✘"}article[data-item-status=unread] .read-icon:before{content:"✔"}span#nav-counter:not(:empty):before,span#page-counter:not(:empty):before{content:" ("}span.items-count:before{content:"("}span#nav-counter:not(:empty):after,span#page-counter:not(:empty):after,span.items-count:after{content:")"}@keyframes blinker{0%,100%{opacity:1}50%{opacity:0}}@-webkit-keyframes blinker{0%,100%{opacity:1}50%{opacity:0}}.loading-icon:before{content:"☀";animation-name:blinker;-webkit-animation-name:blinker;animation-duration:.5s;-webkit-animation-duration:.5s;animation-timing-function:ease-in-out;-webkit-animation-timing-function:ease-in-out;animation-iteration-count:infinite;-webkit-animation-iteration-count:infinite}header{margin-bottom:50px;margin-top:10px}header ul{text-align:right;font-size:90%}header li{display:inline;padding-left:3%}header a{color:#777}nav .menu-more-switcher{color:#777;cursor:pointer}nav .active a{color:#333;font-weight:700}.logo{color:#000;letter-spacing:1px}.logo span{color:#396}.page-section{margin-top:30px}.page-header,.page-section{margin-bottom:30px}.page-header h2,.page-section h2{margin:0;padding:0;font-size:130%;border-bottom:1px dotted #ccc}.page-header ul{text-align:right;margin-top:2px}.page-header li{font-size:90%;display:inline;padding-right:5px}.page-header li:last-child{border:none;padding-right:0}#bottom-menu{border-bottom:1px dotted #ccc;padding-bottom:3px;font-size:.9em;text-align:right;padding-top:30px}.feed-last-checked{color:brown;font-size:.7em;font-weight:400}.item h2,.item h3,.items h2{font-weight:700}.feed-parsing-error{visibility:hidden}.feed-groups li{display:inline;margin-left:0}.feed-groups li a:after{content:', '}.feed-groups li:last-child a:after{content:''}.feed-groups a{color:#333}.items .feed-groups a:focus,.items .feed-groups a:hover{color:#777;text-decoration:none}.items article[data-feed-error] .feed-parsing-error{visibility:visible;color:#000;font-size:.7em;font-weight:700}.items article{border:1px dotted #ddd;margin-bottom:20px;padding:5px;background-color:#fff}.items article[data-feed-error]{background-color:#fcf8e3;border-color:#fcf8e3}.items article[data-feed-disabled] *{color:#aaa}.items h2{font-size:100%;margin:0;padding:0 0 2px}.item-title{display:block;margin-right:80px}.item-icons{display:block;float:right}.items a:focus,.items a:hover{text-decoration:underline}#menu-more a,.bookmarklet,.item h1 a{text-decoration:none}.item-menu,.items .preview{color:#aaa;font-size:70%}.items .preview{line-height:1.5em;font-size:100%}#item-content,.item{font-size:1.1em}.items #current-item{border:3px solid #bce;padding:3px}.items #current-item .preview,.items article:hover .preview{color:#555}.items article[data-item-status=read] h2 a{color:#666}.preview-full-content{overflow:auto;color:#666}.preview-full-content:not(:empty),p.preview:not(:empty){margin-top:15px}.preview-full-content img{max-width:100%;display:block;margin-top:10px;margin-bottom:10px}.item{padding-left:5px;padding-right:5px;padding-bottom:50px;color:#555;line-height:1.6em}.item p,.item pre,.item ul{margin-top:15px}.item p{margin-bottom:20px}.item ul{margin-left:25px}#item-content[dir=rtl] blockquote{border-right:4px solid #ddd;border-left:none;padding-right:25px;padding-left:0}#item-content figure img,#item-content img,#item-content>a img,#item-content>img,.item p img{margin-top:10px;margin-bottom:10px;display:block;max-width:100%}#item-content br+img,#item-content h1 img,#item-content h2 img,#item-content h3 img{display:inline;margin:0}.item h1 a{font-size:2.1em}#item-content a:visited{color:purple}.item nav a,.item nav a:visited,.item nav span{color:#333;font-family:sans-serif}.item nav{width:100%}.nav-left,.nav-right{width:50%;display:block}.item nav.bottom{border-top:1px dotted #ddd;padding-top:8px;margin-top:50px}.nav-left{float:left;text-align:left}.nav-right{text-align:right;margin-left:50%}.nav-left:before{content:"« "}.nav-right:after{content:" »"}ul.item-infos,ul.item-menu{margin:0;padding:0;color:#aaa}.item-menu li,ul.item-infos li{margin:0;padding-left:7px;padding-right:5px;display:inline;border-right:1px solid #ccc}.item-menu li:first-child,ul.item-infos li:first-child{padding-left:0}.item-menu li:last-child,ul.item-infos li:last-child{border:none}.item-menu a,ul.item-infos a{color:#aaa}ul.item-infos{margin-bottom:20px}ul.item-infos .bookmark-icon{font-size:1.5em;margin-left:0}#download-item{color:#000}#items-paging{margin-top:40px;margin-bottom:15px;font-size:80%;text-align:center}#item-content-enclosure{border-bottom:1px dashed #ccc;margin-bottom:20px;padding-bottom:10px}.items article .favicon{height:16px}section li{margin-left:15px;list-style-type:square}iframe,video{max-width:98%}.search{text-align:right}#search-opener{color:#777;font-size:87.5%;cursor:pointer;text-transform:lowercase}#menu-more li.active a,#search-opener:hover{color:#333}#search-form{border:0;padding:0}#search-form input{font-size:75%}#menu-more{padding-top:20px}#menu-more li{font-size:1.1em;padding-top:10px;padding-bottom:10px;border-bottom:1px dotted #ccc;list-style-type:none}#menu-more a{color:#777;display:block}#help-layer{position:fixed;top:0;left:0;bottom:0;width:350px;background:#f0f0f0;box-shadow:2px 0 5px 0 #ccc}#help-layer .panel{border:0}.btn-close{position:absolute;top:0;right:0;font:28px/1 sans-serif;color:#ccc;padding:0 .2em;margin:10px;cursor:pointer}.btn-close:hover{color:#999}#login{width:350px;margin:15% auto 0}#login form{border:none;margin-bottom:45px}#database-selector h4{margin:0 0 10px;padding:0;font-weight:400}.bookmarklet{font-size:.9em;font-weight:700;line-height:30px;padding:4px;color:#333;background:#fff;border:1px dotted #ccc;border-radius:4px;cursor:move}.bookmarklet:focus,.bookmarklet:hover{color:#396}#config-form{border-left:none;padding:0}#config-form h3{border-bottom:1px dotted #ccc}.options{border-left:3px dotted #eee;padding-left:20px}html[dir=rtl] .options,html[dir=rtl] form,html[dir=rtl] ul.item-infos li{border:none}html[dir=rtl] .nav-left:before,html[dir=rtl] .nav-right:after,html[dir=rtl] span.items-count:after,html[dir=rtl] span.items-count:before{content:""}@media only screen and (min-width:480px){.hide-desktop{display:none}.search{margin-top:-30px}}@media only screen and (max-width:480px){.hide-mobile,ul li.hide-mobile{display:none}body{max-width:480px}header{margin-bottom:0}nav .active a{font-weight:400}.page{clear:both;padding-top:20px;overflow-x:hidden}.page li{margin-left:5px}.item{font-size:1em}.item h1{font-size:.75em}.item nav a{font-weight:700;text-decoration:none}.items .preview{color:#555}.item-menu li,ul.item-infos li{padding-left:0;padding-right:5px;border:none}section li{font-size:.85em}#search-form input{box-sizing:border-box;width:100%}}
npm diff --diff=abbrev@1.1.0 --diff=abbrev@1.1.1
diff --git a/package.json b/package.json
index v1.1.0..v1.1.1 100644
   "name": "abbrev",  "version": "1.1.0", "version": "1.1.1",
   "description": "Like ruby's abbrev module, but in js",
   "author": "Isaac Z. Schlueter <i@izs.me>",
   "main": "abbrev.js",$ npm outdated
Package      Current   Wanted   Latest  Location                  Depended by
glob          5.0.15   5.0.15    6.0.1  node_modules/glob         dependent-package-name
nothingness    0.0.3      git      git  node_modules/nothingness  dependent-package-name
npm            3.5.1    3.5.2    3.5.1  node_modules/npm          dependent-package-name
local-dev      0.0.3   linked   linked  local-dev                 dependent-package-name
once           1.3.2    1.3.3    1.3.3  node_modules/once         dependent-package-name
npm diff --diff=1.0.0 --diff=1.1.0
npm diff --diff=pkg@2.0.08.003
brew install htmlq
npm config set <key>=<value> [<key>=<value> ...]
npm config get [<key> [<key> ...]]
npm config delete <key> [<key> ...]
npm config list [--json]
npm config edit
grunt custom:-ajax/jsonp,-css,-deprecated,-dimensions,-effects,-offset,-wrap
int json_scanf(const char *str, int str_len, const char *fmt, ...);
int json_vscanf(const char *str, int str_len, const char *fmt, va_list ap);
typedef void (*json_scanner_t)(const char *str, int len, void *user_data);
  // str has the following JSON string (notice keys are out of order):
  // { "a": 123, "d": true, "b": [1, 2], "c": "hi" }
  int a = 0, d = 0;
  char *c = NULL;
  void *my_data = NULL;
  json_scanf(str, strlen(str), "{ a:%d, b:%M, c:%Q, d:%B }",
             &a, scan_array, my_data, &c, &d);

  // This function is called by json_scanf() call above.
  // str is "[1, 2]", user_data is my_data.
  static void scan_array(const char *str, int len, void *user_data) {
    struct json_token t;
    int i;
    printf("Parsing array: %.*s\n", len, str);
    for (i = 0; json_scanf_array_elem(str, len, "", i, &t) > 0; i++) {
      printf("Index %d, token [%.*s]\n", i, t.len, t.ptr);
     typedef int (*json_printf_callback_t)(struct json_out *, va_list *ap);
int json_printf(struct json_out *, const char *fmt, ...);
int json_vprintf(struct json_out *, const char *fmt, va_list ap);
/* JSON token type */
enum json_token_type {
  JSON_TYPE_INVALID = 0, /* memsetting to 0 should create INVALID value */
  JSON_TYPE_STRING,
  JSON_TYPE_NUMBER,
  JSON_TYPE_TRUE,
  JSON_TYPE_FALSE,
  JSON_TYPE_NULL,
  JSON_TYPE_OBJECT_START,
  JSON_TYPE_OBJECT_END,
  JSON_TYPE_ARRAY_START,
  JSON_TYPE_ARRAY_END,
  JSON_TYPES_CNT,
 * Structure containing token type and value. Used in `json_walk()` and
 * `json_scanf()` with
 the format specifier `%T`.
 */
struct json_token {
  const char *ptr;           /* Points to the beginning of the value */
  int len;                   /* Value length */
  enum json_token_type type; /* Type of the token, possible values are above */
/* Callback-based API */
typedef void (*json_walk_callback_t)(void *callback_data,
                                     const char *name, size_t name_len,
                                     const char *path,
                                     const struct json_token *token);
 * Parse `json_string`, invoking `callback` in a way similar to SAX parsers;
 * see `json_walk_callback_t`.
 */
int json_walk(const char *json_string, int json_string_length,
              json_walk_callback_t callback, void *callback_data);
const char *settings_file_name = "settings.json", *tmp_file_name = "tmp.json";
char *content = json_fread(settings_file_name);
FILE *fp = fopen(tmp_file_name, "w");
struct json_out out = JSON_OUT_FILE(fp);
json_setf(content, strlen(content), &out, ".b", "%Q", "new_string_value");
fclose(fp);
json_prettify_file(tmp_file_name);  // Optional
rename(tmp_file_name, settings_file_name);
title: Project builds
category: Language Service Internals
categoryindex: 300
index: 600
---
# Project builds

The compiler is generally built to compile one assembly: the assumption that the compiler is compiling one assembly is baked into several aspects of the design of the Typed Tree. In contrast, FCS supports compiling a graph of projects, each for a different assembly, each undergoing incremental change.

Project builds are currently stateful and reliant on I/O to on-disk assemblies. This causes many problems and we have a plan for how to fix this core issue in the F# Language Service implementation. See [Plan: Modernizing F# Analysis](https://github.com/dotnet/fsharp/issues/11976). Please read this carefully if you plan to work on any of service.fs, IncrementalBuild.fs or FSharpCheckerResults.fs.

Key data structures:

* `IncrementalBuilder`  manages an incremental build graph for the build of an F# project.
  * See also [Plan: Modernizing F# Analysis](https://github.com/dotnet/fsharp/issues/11976) for how this will evolve to `FSharpProject`.

* `FSharpParseFileResults` -  represents the enrichment (e.g. breakpoint validation) available from the parse tree of a file. The enrichment is made up of several pieces such as:
  * `SyntaxTree`/`ParsedInput`
  * diagnostics from the parsing

* `FSharpCheckFileResults` -  represents the enrichment (e.g. tooltips) available after checking a file. The enrichment is made up of several pieces such as
  * `TcGlobals` - the globals for the compilation, also used in command-line build
  * `TcConfig` - the compiler configuration for the compilation, also used in command-line build
  * `TcImports` - the table of imports for the compilation
  * `CcuThunk` - the thunk of the assembly being compiled
  * `TcState` - the state of the compilation up to this point
  * `TcResolutions` - name environments across int json_scanf(const char *str, int str_len, const char *fmt, ...);
int json_vscanf(const char *str, int str_len, const char *fmt, va_list ap);
typedef void (*json_scanner_t)(const char *str, int len, void *user_data);
  // str has the following JSON string (notice keys are out of order):
  // { "a": 123, "d": true, "b": [1, 2], "c": "hi" }
  int a = 0, d = 0;
  char *c = NULL;
  void *my_data = NULL;
  json_scanf(str, strlen(str), "{ a:%d, b:%M, c:%Q, d:%B }",
             &a, scan_array, my_data, &c, &d);

  // This function is called by json_scanf() call above.
  // str is "[1, 2]", user_data is my_data.
  static void scan_array(const char *str, int len, void *user_data) {
    struct json_token t;
    int i;
    printf("Parsing array: %.*s\n", len, str);
    for (i = 0; json_scanf_array_elem(str, len, "", i, &t) > 0; i++) {
      printf("Index %d, token [%.*s]\n", i, t.len, t.ptr);
     typedef int (*json_printf_callback_t)(struct json_out *, va_list *ap);
int json_printf(struct json_out *, const char *fmt, ...);
int json_vprintf(struct json_out *, const char *fmt, va_list ap);
/* JSON token type */
enum json_token_type {
  JSON_TYPE_INVALID = 0, /* memsetting to 0 should create INVALID value */
  JSON_TYPE_STRING,
  JSON_TYPE_NUMBER,
  JSON_TYPE_TRUE,
  JSON_TYPE_FALSE,
  JSON_TYPE_NULL,
  JSON_TYPE_OBJECT_START,
  JSON_TYPE_OBJECT_END,
  JSON_TYPE_ARRAY_START,
  JSON_TYPE_ARRAY_END,
  JSON_TYPES_CNT,
 * Structure containing token type and value. Used in `json_walk()` and
 * `json_scanf()` with
 the format specifier `%T`.
 */
struct json_token {
  const char *ptr;           /* Points to the beginning of the value */
  int len;                   /* Value length */
  enum json_token_type type; /* Type of the token, possible values are above */
/* Callback-based API */
typedef void (*json_walk_callback_t)(void *callback_data,
                                     const char *name, size_t name_len,
                                     const char *path,
                                     const struct json_token *token);
 * Parse `json_string`, invoking `callback` in a way similar to SAX parsers;
 * see `json_walk_callback_t`.
 */
int json_walk(const char *json_string, int json_string_length,
              json_walk_callback_t callback, void *callback_data);
const char *settings_file_name = "settings.json", *tmp_file_name = "tmp.json";
char *content = json_fread(settings_file_name);
FILE *fp = fopen(tmp_file_name, "w");
struct json_out out = JSON_OUT_FILE(fp);
json_setf(content, strlen(content), &out, ".b", "%Q", "new_string_value");
fclose(fp);
json_prettify_file(tmp_file_name);  // Optional
rename(tmp_file_name, settings_file_name)
dotnet-install.ps1 [-Architecture <ARCHITECTURE>] [-AzureFeed]
    [-Channel <CHANNEL>] [-DryRun] [-FeedCredential]
    [-InstallDir <DIRECTORY>] [-JSonFile <JSONFILE>]
    [-NoCdn] [-NoPath] [-ProxyAddress] [-ProxyBypassList <LIST_OF_URLS>]
    [-ProxyUseDefaultCredentials] [-Quality <QUALITY>] [-Runtime <RUNTIME>]
    [-SkipNonVersionedFiles] [-UncachedFeed] [-Verbose]
    [-Version <VERSION>]
Get-Help ./dotnet-install.ps1
dotnet-install.sh  [--architecture <ARCHITECTURE>] [--azure-feed]
    [--channel <CHANNEL>] [--dry-run] [--feed-credential]
    [--install-dir <DIRECTORY>] [--jsonfile <JSONFILE>]
    [--no-cdn] [--no-path] [--quality <QUALITY>]
    [--runtime <RUNTIME>] [--runtime-id <RID>]
    [--skip-non-versioned-files] [--uncached-feed] [--verbose]
    [--version <VERSION>]
    
header.<log.pi.int.pi> header.log
header.loop.int
header.log.pi.int.log
header.int.header
header.log.pi//INPUT-OUTPUT
orientationHeading.int.loop.log.loop.header
OUTPUT-int
header.log.pi//INPUT-OUTPUT
header.log.powerbox. Input
header.log.pi//INPUT-OUTPUT
orientationHeading.int.loop.log.loop.header
OUTPUT-int
header.log.pi//INPUT-OUTPUT
header.log.powerbox. Inputthe file, ultimately from NameResolution.fs
  * `TcSymbolUses` - resolutions of symbols across the file
  * `LoadClosure` - the `#load` closure of a script
  * `TypedImplFile` - the TAST expression results of compilation, may be thrown away if `keepAssemblyContents` is not true

* `FSharpCheckProjectResults` -  represents the enrichment (e.g. find-all symbol uses) available after checking a project
  * `TcGlobals` - the globals for the compilation, also used in command-line build
  * `TcConfig` - the compiler configuration for the compilation, also used in command-line build
  * `TcImports` - the table of imports for the compilation
  * `CcuThunk` - the thunk of the assembly being compiled
  * `TcState` - the final state of the compilation
## Multi-project builds and cross-project references
In FCS, there is no single abstraction for a "solution build" and instead you have multiple project builds. These are all essentially independent, in the sense they each logically represent an invocation of the F# compiler. That is, the Typed Tree (TAST), TcState etc. nodes are **not** shared between different project compilations. 
If you want to understand why this invariant is important, some key things to understand are:
* The `RawFSharpAssemblyData` is the data blob that would normally be stuffed in the F# resource in the generated DLL  in a normal compilation. That's the "output" of checking each project.
* This is used as "input" for the assembly reference of each consuming project (instead of an on-disk DLL)
* Withiz each consuming project that blob is then resurrected to Typed Tree nodes in `TypedTreePickle.fs`.
Could the compiler share this data across projects? In theory, yes. In practice, it's very tricky business. From a correctness point of view: the process of generating this blob (TypedTreePickle `p_XYZ`) and resurrecting it (TypedTreePickle `u_*`) does some transformations to the Typed Tree that are necessary for correctness of compilation, for example, [in `TypedTreePickle`](https://github.com/dotnet/fsharp/blob/main/src/Compiler/TypedTree/TypedTreePickle.fs#L738). Basically, the Typed Tree nodes from the compilation of one assembly are _not_ valid when compiling a different assembly.

The Typed Tree nodes include `CcuData` nodes, which have access to a number of callbacks into the `TcImports` compilation context for the assembly being compiled. TypedTree nodes are effectively tied to a particular compilation of a particular assembly due to this. There isn't any way to share this data without losing correctness and invalidating many invariants held in the current design. From a lifetime point of view: the Typed Tree nodes are tied together in a graph, so sharing one or two of them might drag across the entire graph and extend lifetimes of that graph. None of these interrelated nodes were designed to be shared across assemblies.
int json_scanf(const char *str, int str_len, const char *fmt, ...);
int json_vscanf(const char *str, int str_len, const char *fmt, va_list ap);
typedef void (*json_scanner_t)(const char *str, int len, void *user_data);
  // str has the following JSON string (notice keys are out of order):
  // { "a": 123, "d": true, "b": [1, 2], "c": "hi" }
  int a = 0, d = 0;
  char *c = NULL;
  void *my_data = NULL;
  json_scanf(str, strlen(str), "{ a:%d, b:%M, c:%Q, d:%B }",
             &a, scan_array, my_data, &c, &d)
  // This function is called by json_scanf() call above.
  // str is "[1, 2]", user_data is my_data.
  static void scan_array(const char *str, int len, void *user_data) {
    struct json_token t;
    int i;
    printf("Parsing array: %.*s\n", len, str);
    for (i = 0; json_scanf_array_elem(str, len, "", i, &t) > 0; i++) {
      printf("Index %d, token [%.*s]\n", i, t.len, t.ptr);
     typedef int (*json_printf_callback_t)(struct json_out *, va_list *ap);
int json_printf(struct json_out *, const char *fmt, ...);
int json_vprintf(struct json_out *, const char *fmt, va_list ap);
/* JSON token type */
enum json_token_type {
  JSON_TYPE_INVALID = 0, /* memsetting to 0 should create INVALID value */
  JSON_TYPE_STRING,
  JSON_TYPE_NUMBER,
  JSON_TYPE_TRUE,
  JSON_TYPE_FALSE,
  JSON_TYPE_NULL,
  JSON_TYPE_OBJECT_START,
  JSON_TYPE_OBJECT_END,
  JSON_TYPE_ARRAY_START,
  JSON_TYPE_ARRAY_END,
  JSON_TYPES_CNT,
 * Structure containing token type and value. Used in `json_walk()` and
 * `json_scanf()` with
 the format specifier `%T`.
 */
struct json_token {
  const char *ptr;           /* Points to the beginning of the value */
  int len;                   /* Value length */
  enum json_token_type type; /* Type of the token, possible values are above */
/* Callback-based API */
typedef void (*json_walk_callback_t)(void *callback_data,
                                     const char *name, size_t name_len,
                                     const char *path,
                                     const struct json_token *token);
 * Parse `json_string`, invoking `callback` in a way similar to SAX parsers;
 * see `json_walk_callback_t`.
 */
int json_walk(const char *json_string, int json_string_length,
              json_walk_callback_t callback, void *callback_data);
const char *settings_file_name = "settings.json", *tmp_file_name = "tmp.json";
char *content = json_fread(settings_file_name);
FILE *fp = fopen(tmp_file_name, "w");
struct json_out out = JSON_OUT_FILE(fp);
json_setf(content, strlen(content), &out, ".b", "%Q", "new_string_value");
fclose(fp);
json_prettify_file(tmp_file_name);  // Optional
rename(tmp_file_name, settings_file_name)
dotnet-install.ps1 [-Architecture <ARCHITECTURE>] [-AzureFeed]
    [-Channel <CHANNEL>] [-DryRun] [-FeedCredential]
    [-InstallDir <DIRECTORY>] [-JSonFile <JSONFILE>]
    [-NoCdn] [-NoPath] [-ProxyAddress] [-ProxyBypassList <LIST_OF_URLS>]
    [-ProxyUseDefaultCredentials] [-Quality <QUALITY>] [-Runtime <RUNTIME>]
    [-SkipNonVersionedFiles] [-UncachedFeed] [-Verbose]
    [-Version <VERSION>]
Get-Help ./dotnet-install.ps1
dotnet-install.sh  [--architecture <ARCHITECTURE>] [--azure-feed]
    [--channel <CHANNEL>] [--dry-run] [--feed-credential]
    [--install-dir <DIRECTORY>] [--jsonfile <JSONFILE>]
    [--no-cdn] [--no-path] [--quality <QUALITY>]
    [--runtime <RUNTIME>] [--runtime-id <RID>]
    [--skip-non-versioned-files] [--uncached-feed] [--verbose]
    [--version <VERSION>]
    heaer.log.int.loop
header.<log.pi.int.pi> header.log
header.loop.int
header.log.pi.int.log
header.int.header
header.log.pi//INPUT-OUTPUT
orientationHeading.int.loop.log.loop.header
OUTPUT-int
header.log.pi//INPUT-OUTPUT
header.log.powerbox. Input
header.log.pi//INPUT-OUTPUT
orientationHeading.int.loop.log.loop.header
OUTPUT-int
header.log.pi//INPUT-OUTPUT
header.log.powerbox. Input
header.log.int
header.logdiff --git a/app/assets/javascripts/diffs/components/diff_table_cell.vue b/app/assets/javascripts/diffs/components/diff_table_cell.vue
index fd04310201551c083f1be5c3effc209710a796b2..5b08b16111407d8319c4c7293cee80fcd2188108 100644
--- a/app/assets/javascripts/diffs/components/diff_table_cell.vue
+++ b/app/assets/javascripts/diffs/components/diff_table_cell.vue
@@ -11,11 +11,8 @@ import {
   LINE_HOVER_CLASS_NAME,
   LINE_UNFOLD_CLASS_NAME,
   INLINE_DIFF_VIEW_TYPE,
-<<<<<<< HEAD
   LINE_POSITION_LEFT,
   LINE_POSITION_RIGHT,
-=======
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
 } from '../constants';
 export default {
@@ -70,7 +67,6 @@ export default {
   computed: {
     ...mapGetters(['isLoggedIn']),
     normalizedLine() {
-<<<<<<< HEAD
       let normalizedLine;
       if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
@@ -79,10 +75,6 @@ export default {
         normalizedLine = this.line.left;
       } else if (this.linePosition === LINE_POSITION_RIGHT) {
         normalizedLine = this.line.right;
-      if (this.diffViewType === INLINE_DIFF_VIEW_TYPE) {
-        return this.line;
->>>>>>> eba05eb8d48... Merge branch '_acet-mr-diff-performance' into 'master'
       
