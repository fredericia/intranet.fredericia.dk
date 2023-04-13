<div class="view-content">
  <?php foreach ($rows as $row): ?>
    <div class="my-wrapper">
      <?php print render($row['title']); ?>
      <?php print render($row['body']); ?>
    </div>
  <?php endforeach; ?>
</div>
