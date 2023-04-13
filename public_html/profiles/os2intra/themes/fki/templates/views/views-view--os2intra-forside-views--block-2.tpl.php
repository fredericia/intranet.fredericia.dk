<div class="custom-view-block">
  <?php foreach ($rows as $row): ?>
    <div class="custom-view-row">
      <div class="custom-view-image">
        <?php print render($row->field_field_os2intra_images); ?>
      </div>
      <div class="custom-view-text">
        <div class="custom-view-title">
          <?php print render($row->title); ?>
        </div>
        <div class="custom-view-body">
          <?php print render($row->body); ?>
        </div>
      </div>
    </div>
  <?php endforeach; ?>
</div>
