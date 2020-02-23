<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
// /** The name of the database for WordPress */
define( 'DB_NAME', 'db' );

/** MySQL database username */
define( 'DB_USER', 'ynoam' );

/** MySQL database password */
define( 'DB_PASSWORD', 'ynoam' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         '9cf|1^smmm;Q$y_$PRIAT=5S !x%Smuyp%Vn-]A@<ix%R4F|B<k5ys/Awb~8ES!}' );
define( 'SECURE_AUTH_KEY',  'jMJvggr5C89S7YRz7w{~ej`[cdU#/QbO=4SCsU15)I%^maL4BO$G.#xdme~I>CJ;' );
define( 'LOGGED_IN_KEY',    '.PEM$wSX.geRvmKSAD9CW_qh Oyub,FR=$VU0<f~~Rer +zCnp2X$Ih(f!%BM;/M' );
define( 'NONCE_KEY',        'S@g^aJF9i.U:?)XV*_5X#r?c%/D1X,|csrGe30(:~D2<42MdSj#6U]csfJHd;7EI' );
define( 'AUTH_SALT',        'lz|V#-2;{[kA<2nFj?~dW-`^=30eqFx ^@QkIV~0O/c<P*Zu$A~.iJvGRIE8|B5M' );
define( 'SECURE_AUTH_SALT', 'I7)@J,$$;/Mz{BBqP$^mw2qwzq}g4FH|pjMF?k_:R|5TP=r.pTgSEYU3{pbN|Y!q' );
define( 'LOGGED_IN_SALT',   '`+nI%|fq&=[h=V<g*6TwkG1S.VI}&hql9rB(1Yaibbwbqcfw:$S~r5;0|+ep^nA~' );
define( 'NONCE_SALT',       ' !0XX((~l?0@<@lV3I=j%W0q`b&}JK[~^Zn#bE01<G``TX{?tC@:q)g(G!$FeHIH' );

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
