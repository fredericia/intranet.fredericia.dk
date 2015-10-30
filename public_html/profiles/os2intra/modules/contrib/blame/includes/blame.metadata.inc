<?php
/**
 * @file
 * Blame metadata controller class.
 */

/**
 * @see hook_entity_property_info()
 */
class BlameMetadataController extends EntityDefaultMetadataController {

  /**
   * Set entity property info.
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['bid'] = array(
      'label' => t('Blame ID'),
      'type' => 'integer',
      'description' => t('The blame entity ID.'),
      'schema field' => 'bid',
    );
    $properties['uid'] = array(
      'label' => t('Submitter'),
      'type' => 'user',
      'description' => t('The user who submitted the form.'),
      'schema field' => 'uid',
      'getter callback' => 'blame_property_get',
    );
    $properties['created'] = array(
      'label' => t('Submission Date'),
      'type' => 'date',
      'description' => t('The date the form was submitted.'),
      'schema field' => 'created',
      'getter callback' => 'blame_property_get',
    );
    $properties['form_id'] = array(
      'label' => t('Form ID'),
      'type' => 'text',
      'description' => t('The ID of the submitted form.'),
      'schema field' => 'form_id',
    );
    $properties['location'] = array(
      'label' => t('Form Location'),
      'type' => 'text',
      'description' => t('The path where the form was submitted.'),
      'schema field' => 'location',
    );

    return $info;
  }

}
