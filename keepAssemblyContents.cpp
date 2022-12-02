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
       
