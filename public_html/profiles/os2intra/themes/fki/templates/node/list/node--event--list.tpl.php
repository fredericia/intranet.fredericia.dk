<?php if ($view_mode == 'list'): ?>
  <!-- node--event--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-list fki-list-event"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-list-heading">
      <div class="table">
        <div class="table-row">
          <div class="table-cell">
            <div class="fki-list-heading-calendar-date fki-calendar"><span class="fki-calendar-date-month fki-calendar-month"><?php print $created_at_seperated['month']['short']; ?></span><span class="fki-calendar-date-day fki-calendar-day"><?php print $created_at_seperated['day']['integer']; ?></span></div>
          </div>
          <div class="table-cell">
            <h3 class="fki-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
          </div>
        </div>
      </div>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
