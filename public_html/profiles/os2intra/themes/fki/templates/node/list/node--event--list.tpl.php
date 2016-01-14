<?php if ($view_mode == 'list'): ?>
  <!-- node--event--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-event"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-list-heading">
      <div class="table">
        <div class="table-row">
          <div class="table-cell">
            <div class="os2-node-list-heading-calendar-date os2-calendar"><span class="os2-calendar-date-month os2-calendar-month"><?php print $event_date_seperated['month']['short']; ?></span><span class="os2-calendar-date-day os2-calendar-day"><?php print $event_date_seperated['day']['integer']; ?></span></div>
          </div>
          <div class="table-cell">
            <h3 class="os2-node-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a></h3>
          </div>
        </div>
      </div>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
