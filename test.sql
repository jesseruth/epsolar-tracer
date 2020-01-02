CREATE TABLE `stats` (
  `Controller` int(2) NOT NULL,
  `timestamp` varchar(10) COLLATE utf8mb4_unicode_ci NOT NULL,
  `PV array voltage` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `PV array current` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `PV array power` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Battery voltage` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Battery charging current` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Battery charging power` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Load voltage` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Load current` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Load power` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Charger temperature` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Heat sink temperature` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Battery status` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `Equipment status` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`Controller`,`timestamp`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
