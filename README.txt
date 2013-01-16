
-- SUMMARY --

* The Anonymous Redirect module redirects anonymous users to another domain.
* Users can still login by visiting /user or /user/login.
* Authenticated users can access the site as per usual.


-- INSTALLATION --

* Install as usual, see http://drupal.org/node/895232 for further information.


-- CONFIGURATION (UI) --

Visit admin/config/development/anonymous-redirect


-- CONFIGURATION (SETTINGS.PHP) --

You can also enable/disable anonymous redirect via settings.php.

This is particularly helpful if you want this always enabled on your staging
site without having to disable and enable the module when syncing your database
from production to staging/development. Just add the following to the bottom of
the appropriate settings.php file.

// Make sure anonymous redirect is always enabled / disabled.
$conf['anonymous_redirect_enable'] = TRUE; // Set to FALSE to disable.
$conf['anonymous_redirect_base'] = 'http://example.com';