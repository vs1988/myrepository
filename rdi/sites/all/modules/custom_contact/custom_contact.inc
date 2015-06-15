<?php
//**********************Begining contact form **************************//

function custom_contact_form($form, &$form_state){
	
$form['#attributes'] = array('enctype' => 'multipart/form-data');	

$form['personal'] = array(
    '#type' => 'fieldset',
    '#title' => t('Personal Details'),
    '#collapsible' => TRUE, // Added
    '#collapsed' => FALSE,  // Added
  );
$form['employment'] = array(
    '#type' => 'fieldset',
    '#title' => t('Employment Details'),
    '#collapsible' => TRUE, // Added
    '#collapsed' => FALSE,  // Added
  );
$form['skills'] = array(
    '#type' => 'fieldset',
    '#title' => t('Skills'),
    '#collapsible' => TRUE, // Added
    '#collapsed' => FALSE,  // Added
  );  
$form['About_u'] = array(
    '#type' => 'fieldset',
    '#title' => t('More About You'),
    '#collapsible' => TRUE, // Added
    '#collapsed' => FALSE,  // Added
  ); 	
$form ['personal']['job_applied'] = array(
    '#type' => 'select',
    '#title' => t('Position Applied For :'),
	 '#required' => TRUE,
    '#default_value' => '',
    '#options' => array(
	  
      'Drupal Developer' => 'UI Designer',
	  'HTML Programmer' => 'HTML Programmer',
	  'Business Analyst' => 'Business Analyst',
	  'Sr. Java Developer' => 'Sr. Java Developer',
	  'Business Development Executive' => 'Business Development Executive',
	  'Business Technical Consultant' => 'Business Technical Consultant',
	  'QA Engineer' => 'QA Engineer',
	  'Android Developer' => 'Android Developer',
	  'iPhone Developer' => 'iPhone Developer',
	  'PHP - Drupal Developer' => 'PHP - Drupal Developer',
	  'Content Writer' => 'Content Writer',
	  'Project Leader' => 'Project Leader',
	  'Magento Developer' => 'Magento Developer',
	  'Zend / CakePHP Developer' => 'Zend / CakePHP Developer',
	  'WordPress / Joomla Developer' => 'WordPress / Joomla Developer',
	  'Sr. Web Designer' => 'Sr. Web Designer',
	  'DotNet Developer' => 'DotNet Developer',
	  'CorePHP Developer' => 'CorePHP Developer',
	  'iOS Developer' => 'iOS Developer',
	  'Titanium Developer' => 'Titanium Developer',
     
    ),   
  );

$form['personal']['fullname'] = array(
    '#type' => 'textfield',
    '#title' => t('Candidate Name : '),
    '#default_value' => '',
	'#size' => 20,
    '#maxlength' => 20,
	 '#required' => TRUE,
  );

$form['personal']['age'] = array(
    '#type' => 'textfield',
    '#title' => t('Age:'),
    '#default_value' => '',
	'#size' => 20,
    '#maxlength' => 20,
	'#required' => TRUE,

  );
  
$form['personal']['gender'] = array(
    '#type' => 'radios',
	'#title' => t('Gender:'),
	'#required' => TRUE,
	'#options' => array(
	'male' => 'Male',
	'female' => 'Female',
  )
  ); 

$form['personal']['location'] = array(
    '#type' => 'textfield',
	'#required' => TRUE,
    '#title' => t('Location (city) :'),
    '#default_value' => '',
	'#size' => 20,
    '#maxlength' => 20,
  );

$form['personal']['contact_phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Contact Phone / Mobile : '),
	'#required' => TRUE,
    '#default_value' => '',
	'#size' => 20,
    '#maxlength' => 20,
  );
   
$form['personal']['contact_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Contact Email : '),
	'#required' => TRUE,
    '#default_value' => '',
	'#size' => 20,
    '#maxlength' => 20,
  );
     
$form['personal']['qualification'] = array(
    '#type' => 'select',
    '#title' => t('Qualification:'),
	'#required' => TRUE,
    '#default_value' => '-select-',
    '#options' => array(
	 
      'B.E.Graduate' => 'B.E.Graduate',
      'M.Tech' => 'M.Tech',
      'M C A' => 'M C A',
	  'B A' => 'B A',
      'B Com' => 'B Com',
      'B.Sc' => 'B.Sc',
	  'Diploma' => 'Diploma',
	  'Other' => 'Other',
    ),   
  );


$form['employment']['experience'] = array(
    '#type' => 'select',
    '#title' => t('Years Of Experience :'),
	'#required' => TRUE,
    '#default_value' => '',
    '#options' => array(
	 
      'Fresher' => 'Fresher',
      '6 Months and Above' => '6 Months and Above',
      '1 Year and Above' => '1 Year and Above',
	   '2 Years and above' => '2 Years and above',
      '3 Years and above' => '3 Years and above',
      '4 Years and above' => '4 Years and above',
	  '5 Years and above' => '5 Years and above',
	  
    ),   
  );  

$form['employment']['job_seek'] = array(
    '#type' => 'select',
    '#title' => t('Type Of Employment seeking : '),
    '#default_value' => '',
    '#options' => array(
	 
      'Part Time' => 'Part Time',
      'Full Time' => 'Full Time',
      'Contract'=> 'Contract',
	   'Consulting' => 'Consulting',
      'Freelancing' => 'Freelancing',
      'Night Shift'=> 'Night Shift',
    ),   
  );  
  
$form['skills']['tech_skill'] = array(
    '#type' => 'textarea',
    '#title' => t('Your Technical Skills/Strengths : '),
    '#wysiwyg' => false,  
	
	'#resizable' => FALSE,
	
    ); ;
  
$form['skills']['personal_attrib'] = array(
    '#type' => 'textarea',
    '#title' => t('Your Personal Attributes : '),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 
  
  
$form['skills']['project_done'] = array(
    '#type' => 'textarea',
    '#title' => t('Professional History, Details about projects/work done. '),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 

$form['About_u']['roles_curr_job'] = array(
    '#type' => 'textarea',
    '#title' => t('Describe your Roles and Responsibilities involved in your current job. '),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 
	
$form['About_u']['curr_comp_feel'] = array(
    '#type' => 'textarea',
    '#title' => t('What is your view about the current company you work for now? '),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    );  
	
$form['About_u']['colleague_view_for_u'] = array(
    '#type' => 'textarea',
    '#title' => t('How would your co-worker describe you as  person?'),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 

$form['About_u']['job_change_reason'] = array(
    '#type' => 'textarea',
    '#title' => t('Reason for looking job change with the current company. '),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 

$form['About_u']['shift_agree'] = array(
    '#type' => 'textarea',
    '#title' => t('Are you ready to work in night shift, if needed?'),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 	

$form['About_u']['family_background'] = array(
    '#type' => 'textarea',
    '#title' => t('Describe your and your family background in brief?'),
    '#wysiwyg' => false,  
	'#rows' => 5,
	'#cols' => 30,
	'#resizable' => false,
    ); 
	
$form['About_u']['file'] = array(
        '#type' => 'file',
        '#title' => t('Choose a file'),
		
    );
	
$form['About_u']['my_captcha_element'] = array(
  '#type' => 'captcha',
  '#captcha_type' => 'captcha/Math',
);
	
     
$form['submit'] = array(
    '#type' => 'submit',
	'#value' => t('Apply '),
	'#description' => t('.pdf, .doc or .docx formats only'),
  );
  
// Get the path to the module
$path = drupal_get_path('module', 'custom_contact');
// Attach the CSS and JS to the form
$form['#attached'] = array
(
	'css' => array
	(
		'type' => 'file',
		'data' => $path . '/custom_contact.css',
	),
	
);
   return $form;
}
/*
function custom_contact_theme()
{
	return array
	(
		'custom_contact_form' => array
		(
			'render element' => 'form'
		),
	);
}

function theme_custom_contact_form($variables)
{
	// Isolate the form definition form the $variables array
	$form = $variables['form'];
	$output = '<h2>' . t('Apply For Job') . '</h2>';
	// Put the entire structure into a div that can be used for
	// CSS purposes
	$output .= '<div id="job_details">';
	// Each of the pieces of text is wrapped in a <span>
	// tag to allow it to be floated left
//	$output .= '<span>' . t('My name is') . '</span>';
	// Form elements are rendered with drupal_render()
	
	$output .= '<div id="personal_details">';
	
	$output .= '<div class="col">';
	$output .= drupal_render($form['job_applied']);
	$output .= drupal_render($form['age']);
	$output .= drupal_render($form['location']);
	$output .= drupal_render($form['contact_email']);
	
	$output .= '</div>';
	
	$output .= '<div class="col">';
	$output .= drupal_render($form['fullname']);
	$output .= drupal_render($form['gender']);
	$output .= drupal_render($form['contact_phone']);
	$output .= drupal_render($form['qualification']);
	$output .= '</div>';
	
	$output .= '</div>';
//	$output .= '<span>' . t('years old.') . '</span>';
	$output .= '</div>';
	// Pass the remaining form elements through drupal_render_children()
	$output .= drupal_render_children($form);
	// return the output
	return $output;
}
*/

function custom_contact_form_submit($form, $form_state)
{
	
	$job_applied = $form_state['values']['job_applied'];
	$fullname = $form_state['values']['fullname'];
	$age = $form_state['values']['age'];
	$gender = $form_state['values']['gender'];
	$location = $form_state['values']['location'];
	$cont_email = $form_state['values']['contact_email'];
	$cont_phone = $form_state['values']['contact_phone'];
	$qualification = $form_state['values']['qualification'];
	$experience = $form_state['values']['experience'];
	$job_seek = $form_state['values']['job_seek'];
	$tech_skill = $form_state['values']['tech_skill'];
	$pers_attrib = $form_state['values']['personal_attrib'];
	$proj_done = $form_state['values']['project_done'];
	$roles_curr_job = $form_state['values']['roles_curr_job'];
    $curr_comp_feel = $form_state['values']['curr_comp_feel'];
	$colleague_view_for_u = $form_state['values']['colleague_view_for_u'];
	$job_change_reason = $form_state['values']['job_change_reason'];
	$shift_agree = $form_state['values']['shift_agree'];
	$family_background = $form_state['values']['family_background'];
	$file = $form_state['values']['file'];
	
	$filepath = 'public://csvuploads';
    $r = file_prepare_directory($filepath, FILE_CREATE_DIRECTORY); 
	$validators = array( 'file_validate_extensions' => array('pdf doc docx'),);
	$file = file_save_upload('file',$validators,$filepath, FILE_EXISTS_REPLACE);	
	//unset($form_state['values']['file']);
	 //$file->status = FILE_STATUS_PERMANENT;
     //file_save($file);
	if(empty($file))
	{	
		$file = new stdClass();
		$file->filename = 'blank.docx';
	}
	$data = array(
                      'job_applied' => $job_applied,
					  'fullname' => $fullname,
					  'age' => $age,
					  'gender' => $gender,
					  'location' => $location,
					  'contact_phone' => $cont_phone,
					  'contact_email' => $cont_email,
                      'qualification' => $qualification,
					  'experience' => $experience,
					  'employment_seeking' => $job_seek,
					  'technical_skill' => $tech_skill,
					  'personal_attributes' => $pers_attrib,
					  'projects_done' => $proj_done,
					  'roles' => $roles_curr_job,
					  'current_comp_feel' => $curr_comp_feel,
					  'colleague_view_for_u' => $colleague_view_for_u,
					  'job_change_reason' => $job_change_reason,
					  'shift_agree' => $shift_agree,
					  'family_background' => $family_background,	
					  'resume_url' => $file->filename,
					
					  
                    ) ; 
	$result = db_insert('job_contact')
                    ->fields($data)
                    ->execute();
					send_mail($data);
				
					
}


function send_mail($_data){
$to = "vs19011988@gmail.com";
$subject = "Candidate Applied For Job:";

$message = "
<html>
<head>
<title>HTML email</title>
</head>
<body>
<p>This email contains HTML Tags!</p>
<table>
<tr>
<th>Candidate Name</th>
<th>Position Applied</th>
<th>Age</th>
<th>Gender</th>
<th>Contact Phone</th>
<th>Contact Email</th>
<th>Location</th>
<th>Qualification</th>
<th>Experience</th>
<th>Seeking Job</th>
<th>Technical Skill</th>
<th>Personal Attributes</th>
<th>Project Done</th>
<th>Roles in Current Job</th>
<th>Reason For Job Change</th>
<th>Shift Agreement</th>

</tr>
<tr>
<td>".$_data['fullname']."</td>
<td>".$_data['job-applied']."</td>
<td>".$_data['age']."</td>
<td>".$_data['gender']."</td>
<td>".$_data['contact_phone']."</td>
<td>".$_data['contact_email']."</td>
<td>".$_data['location']."</td>
<td>".$_data['qualification']."</td>
<td>".$_data['experience']."</td>
<td>".$_data['employment_seeking']."</td>
<td>".$_data['technical_skill']."</td>
<td>".$_data['personal_attributes']."</td>
<td>".$_data['projects_done']."</td>
<td>".$_data['roles']."</td>
<td>".$_data['job_change_reason']."</td>
<td>".$_data['shift_agree']."</td>
</tr>
</table>
</body>
</html>
";

// Always set content-type when sending HTML email
$headers = "MIME-Version: 1.0" . "\r\n";
$headers .= "Content-type:text/html;charset=UTF-8" . "\r\n";

// More headers
$headers .= 'From:"River Delta India"<webmaster@riverdeltaindia.com>' . "\r\n";
//$headers .= 'Cc: myboss@example.com' . "\r\n";

mail($to,$subject,$message,$headers);
}

//validate the form

function custom_contact_form_validate($form, &$form_state) {
	$age = $form_state['values']['age'];
	$phone = $form_state['values']['contact_phone'];
	$email = $form_state['values']['contact_email'];
	if(!is_numeric($age) || $age < 18 || $age > 60)
	{
		form_set_error('age', t('Entered age must be numeric and ranged between 18 and 60.'));
	}
	if(!is_numeric($phone))
	{
		form_set_error('contact_phone', t('Entered phone must be numeric.'));
	}
	if (!filter_var($email, FILTER_VALIDATE_EMAIL)) 
	{
		form_set_error('contact_email', t('Entered email must be right format.'));
	}
}


?>