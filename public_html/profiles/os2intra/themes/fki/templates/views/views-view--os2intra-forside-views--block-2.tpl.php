<div class="custom-view-block">
  {% for row in rows %}
  <div class="custom-view-row">
    <div class="custom-view-image">
      {{ row.content.field_os2intra_images }}
    </div>
    <div class="custom-view-text">
      <div class="custom-view-title">
        {{ row.content.title }}
      </div>
      <div class="custom-view-body">
        {{ row.content.body }}
      </div>
    </div>
  </div>
  {% endfor %}
</div>
