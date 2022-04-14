CREATE DATABASE  IF NOT EXISTS `bankautomat` /*!40100 DEFAULT CHARACTER SET utf8 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `bankautomat`;
-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bankautomat
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `account_action`
--

DROP TABLE IF EXISTS `account_action`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_action` (
  `id_account_action` int NOT NULL AUTO_INCREMENT,
  `id_client` int DEFAULT NULL,
  `action` varchar(45) DEFAULT NULL,
  `action_time` timestamp NULL DEFAULT NULL,
  `amount` double DEFAULT NULL,
  PRIMARY KEY (`id_account_action`),
  KEY `account_number_idx` (`id_client`)
) ENGINE=InnoDB AUTO_INCREMENT=592 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_action`
--

LOCK TABLES `account_action` WRITE;
/*!40000 ALTER TABLE `account_action` DISABLE KEYS */;
INSERT INTO `account_action` VALUES (1,1,'nosto','2022-04-04 07:20:44',50),(2,1,'nosto','2022-04-04 07:25:04',20),(3,2,'nosto','2022-04-04 07:26:07',10),(4,2,'nosto','2022-04-04 07:26:13',100),(5,2,'nosto','2022-04-04 07:35:36',100),(6,2,'nosto','2022-04-04 07:47:43',200),(7,1,'nosto','2022-04-04 07:47:52',100),(8,1,'withdrawal','2022-04-04 16:07:17',100),(9,1,'withdrawal','2022-04-04 16:31:53',50),(10,1,'withdrawal','2022-04-04 17:08:34',10),(11,1,'withdrawal','2022-04-04 17:09:48',60),(12,1,'withdrawal','2022-04-04 17:09:49',60),(13,1,'withdrawal','2022-04-04 17:10:03',60),(14,1,'withdrawal','2022-04-04 17:12:21',20),(15,1,'withdrawal','2022-04-04 17:12:23',20),(16,1,'withdrawal','2022-04-04 17:12:23',20),(17,1,'withdrawal','2022-04-04 17:16:01',20),(18,1,'withdrawal','2022-04-04 17:27:13',20),(19,1,'withdrawal','2022-04-04 17:27:13',20),(20,1,'withdrawal','2022-04-04 17:27:13',20),(21,1,'withdrawal','2022-04-04 17:27:15',20),(22,1,'withdrawal','2022-04-04 17:27:16',20),(23,2,'withdrawal','2022-04-04 17:44:08',2000),(24,1,'withdrawal','2022-04-04 17:44:25',100),(25,2,'withdrawal','2022-04-04 17:44:29',100),(26,2,'withdrawal','2022-04-04 17:44:30',100),(27,2,'withdrawal','2022-04-04 17:49:58',100),(28,2,'withdrawal','2022-04-04 17:50:17',100),(29,2,'withdrawal','2022-04-04 17:50:52',100),(30,3,'withdrawal','2022-04-04 18:09:42',20),(31,3,'withdrawal','2022-04-04 18:22:57',200),(32,3,'withdrawal','2022-04-04 18:23:08',500),(33,3,'withdrawal','2022-04-04 18:23:08',500),(34,3,'withdrawal','2022-04-04 18:23:12',500),(35,3,'withdrawal','2022-04-04 18:23:25',100),(36,3,'withdrawal','2022-04-04 18:23:26',100),(37,3,'withdrawal','2022-04-04 18:23:29',100),(38,3,'withdrawal','2022-04-04 18:24:01',40),(39,1,'withdrawal','2022-04-04 18:32:52',40),(40,1,'withdrawal','2022-04-04 18:32:56',40),(41,1,'withdrawal','2022-04-04 18:34:17',40),(42,1,'withdrawal','2022-04-04 18:34:33',-40),(43,1,'withdrawal','2022-04-04 18:51:22',500),(44,3,'deposit','2022-04-04 18:51:22',500),(45,1,'withdrawal','2022-04-04 18:52:56',200),(46,3,'deposit','2022-04-04 18:52:56',200),(47,1,'withdrawal','2022-04-04 18:53:08',500),(48,3,'deposit','2022-04-04 18:53:08',500),(49,1,'withdrawal','2022-04-05 07:26:40',20),(50,1,'withdrawal','2022-04-05 08:06:53',20),(51,1,'withdrawal','2022-04-05 08:11:51',20),(52,1,'withdrawal','2022-04-05 08:11:51',20),(53,1,'withdrawal','2022-04-05 10:11:56',20),(54,1,'withdrawal','2022-04-05 10:14:09',10),(55,1,'withdrawal','2022-04-05 10:19:38',10),(56,1,'withdrawal','2022-04-05 10:20:20',5),(57,1,'withdrawal','2022-04-05 10:20:20',5),(58,1,'withdrawal','2022-04-05 10:37:04',5),(59,1,'withdrawal','2022-04-05 10:37:07',5),(60,1,'withdrawal','2022-04-05 10:37:09',20),(61,1,'withdrawal','2022-04-05 10:37:13',50),(62,1,'withdrawal','2022-04-05 10:37:17',100),(63,1,'withdrawal','2022-04-05 10:37:37',100),(64,1,'withdrawal','2022-04-05 12:42:59',20),(65,1,'withdrawal','2022-04-05 12:45:37',20),(66,1,'withdrawal','2022-04-05 12:45:40',20),(67,1,'withdrawal','2022-04-05 12:48:32',20),(68,1,'withdrawal','2022-04-05 12:48:33',20),(69,1,'withdrawal','2022-04-05 12:48:33',20),(70,1,'withdrawal','2022-04-05 12:48:34',20),(71,1,'withdrawal','2022-04-05 12:48:34',20),(72,1,'withdrawal','2022-04-05 12:48:34',20),(73,1,'withdrawal','2022-04-05 12:48:35',20),(74,1,'withdrawal','2022-04-05 12:48:35',20),(75,1,'withdrawal','2022-04-05 14:41:39',20),(76,1,'withdrawal','2022-04-05 14:41:43',20),(77,1,'withdrawal','2022-04-05 14:41:43',20),(78,1,'withdrawal','2022-04-05 14:41:43',20),(79,1,'withdrawal','2022-04-05 14:41:43',20),(80,1,'withdrawal','2022-04-05 14:41:43',20),(81,1,'withdrawal','2022-04-05 14:41:43',20),(82,1,'withdrawal','2022-04-05 14:41:43',20),(83,1,'withdrawal','2022-04-05 14:41:44',20),(84,1,'withdrawal','2022-04-05 14:41:44',20),(85,1,'withdrawal','2022-04-05 14:41:44',20),(86,1,'withdrawal','2022-04-05 14:41:44',20),(87,1,'withdrawal','2022-04-05 14:41:44',20),(88,1,'withdrawal','2022-04-05 14:41:44',20),(89,1,'withdrawal','2022-04-05 14:41:45',20),(90,1,'withdrawal','2022-04-05 14:41:46',20),(91,1,'withdrawal','2022-04-05 14:41:46',20),(92,1,'withdrawal','2022-04-05 14:41:46',20),(93,1,'withdrawal','2022-04-05 14:42:03',100),(94,1,'withdrawal','2022-04-05 14:42:03',100),(95,1,'withdrawal','2022-04-05 14:42:04',100),(96,1,'withdrawal','2022-04-08 07:14:19',NULL),(97,1,'withdrawal','2022-04-08 07:14:33',NULL),(98,1,'withdrawal','2022-04-08 07:14:46',10),(99,1,'withdrawal','2022-04-08 07:15:15',NULL),(100,1,'withdrawal','2022-04-08 20:09:26',100),(101,1,'withdrawal','2022-04-08 20:15:35',100),(102,1,'withdrawal','2022-04-08 21:02:24',100),(103,1,'withdrawal','2022-04-08 21:02:32',20),(104,1,'withdrawal','2022-04-08 21:34:51',50),(105,1,'withdrawal','2022-04-08 21:43:15',20),(106,1,'withdrawal','2022-04-08 21:43:24',50),(107,1,'withdrawal','2022-04-08 21:43:28',100),(108,1,'withdrawal','2022-04-08 21:44:09',50),(109,1,'withdrawal','2022-04-08 21:44:34',100),(110,1,'withdrawal','2022-04-08 21:47:58',20),(111,1,'withdrawal','2022-04-08 21:49:03',100),(112,1,'withdrawal','2022-04-08 21:51:20',100),(113,1,'withdrawal','2022-04-08 21:53:34',100),(114,1,'withdrawal','2022-04-08 21:55:24',20),(115,1,'withdrawal','2022-04-08 21:59:06',100),(116,1,'withdrawal','2022-04-08 22:07:10',20),(117,1,'withdrawal','2022-04-08 22:07:43',20),(118,1,'withdrawal','2022-04-08 22:07:46',20),(119,1,'withdrawal','2022-04-08 22:07:48',50),(120,1,'withdrawal','2022-04-08 22:07:50',100),(121,1,'withdrawal','2022-04-08 22:14:14',20),(122,1,'withdrawal','2022-04-08 22:14:15',20),(123,1,'withdrawal','2022-04-08 22:27:42',20),(124,1,'withdrawal','2022-04-08 22:42:34',20),(125,1,'withdrawal','2022-04-08 22:44:54',25),(126,1,'withdrawal','2022-04-08 22:45:00',25),(127,1,'withdrawal','2022-04-08 22:45:02',25),(128,1,'withdrawal','2022-04-08 22:45:04',25),(129,1,'withdrawal','2022-04-08 22:46:05',125),(130,1,'withdrawal','2022-04-08 22:52:04',300),(131,1,'withdrawal','2022-04-08 22:52:08',300),(132,1,'withdrawal','2022-04-08 22:52:20',300),(133,1,'withdrawal','2022-04-08 22:53:08',500),(134,1,'withdrawal','2022-04-09 09:36:33',20),(135,1,'withdrawal','2022-04-09 09:36:44',20),(136,1,'withdrawal','2022-04-09 09:36:47',100),(137,1,'withdrawal','2022-04-09 09:36:57',100),(138,1,'withdrawal','2022-04-09 09:37:11',100),(139,1,'withdrawal','2022-04-09 09:39:36',20),(140,1,'withdrawal','2022-04-09 09:41:54',100),(141,1,'withdrawal','2022-04-09 09:42:02',100),(142,1,'withdrawal','2022-04-09 09:42:07',100),(143,1,'withdrawal','2022-04-09 09:42:10',100),(144,1,'withdrawal','2022-04-09 09:47:02',100),(145,1,'withdrawal','2022-04-09 09:47:12',500),(146,1,'withdrawal','2022-04-09 09:49:23',100),(147,1,'withdrawal','2022-04-09 09:49:29',500),(148,1,'withdrawal','2022-04-09 09:49:49',1515),(149,1,'withdrawal','2022-04-09 09:50:10',50),(150,1,'withdrawal','2022-04-09 09:50:16',50),(151,1,'withdrawal','2022-04-09 10:05:49',100),(152,1,'withdrawal','2022-04-09 10:05:57',500),(153,1,'withdrawal','2022-04-09 10:06:49',100),(154,1,'withdrawal','2022-04-09 10:07:02',50),(155,1,'withdrawal','2022-04-09 10:07:04',50),(156,1,'withdrawal','2022-04-09 11:10:59',100),(157,1,'withdrawal','2022-04-09 11:11:01',50),(158,1,'withdrawal','2022-04-09 11:11:07',1500),(159,1,'withdrawal','2022-04-10 10:19:00',100),(160,1,'withdrawal','2022-04-10 11:51:59',50),(161,1,'withdrawal','2022-04-10 11:58:53',5555),(162,1,'withdrawal','2022-04-10 14:21:08',555),(163,1,'withdrawal','2022-04-11 07:31:20',50),(164,1,'withdrawal','2022-04-11 09:01:01',10),(165,1,'withdrawal','2022-04-11 10:16:02',100),(166,1,'withdrawal','2022-04-11 10:58:16',50),(167,1,'withdrawal','2022-04-11 11:00:52',20),(168,1,'withdrawal','2022-04-11 11:02:02',20),(169,1,'withdrawal','2022-04-11 11:03:16',60),(170,1,'withdrawal','2022-04-11 11:10:57',100),(171,1,'withdrawal','2022-04-11 11:12:14',20),(172,1,'withdrawal','2022-04-11 11:12:18',40),(173,1,'withdrawal','2022-04-11 11:12:28',20),(174,1,'withdrawal','2022-04-11 11:12:33',60),(175,1,'withdrawal','2022-04-11 11:13:59',20),(176,1,'withdrawal','2022-04-11 11:14:02',40),(177,1,'withdrawal','2022-04-11 11:14:40',20),(178,1,'withdrawal','2022-04-11 11:14:41',40),(179,1,'withdrawal','2022-04-11 11:15:15',120),(180,1,'withdrawal','2022-04-11 11:15:46',20),(181,1,'withdrawal','2022-04-11 11:15:49',25),(182,1,'withdrawal','2022-04-11 11:19:24',20),(183,1,'withdrawal','2022-04-11 11:19:26',20),(184,1,'withdrawal','2022-04-11 11:19:34',40),(185,1,'withdrawal','2022-04-11 11:20:19',20),(186,1,'withdrawal','2022-04-11 11:23:36',20),(187,1,'withdrawal','2022-04-11 11:25:41',20),(188,1,'withdrawal','2022-04-11 11:25:43',20),(189,1,'withdrawal','2022-04-11 11:26:03',5),(190,1,'withdrawal','2022-04-11 11:28:08',20),(191,1,'withdrawal','2022-04-11 11:28:13',5),(192,1,'withdrawal','2022-04-11 11:29:11',20),(193,1,'withdrawal','2022-04-11 11:30:25',20),(194,1,'withdrawal','2022-04-11 11:33:24',20),(195,1,'withdrawal','2022-04-11 11:34:26',20),(196,1,'withdrawal','2022-04-11 11:35:02',40),(197,1,'withdrawal','2022-04-11 11:35:08',40),(198,1,'withdrawal','2022-04-11 11:35:31',20),(199,1,'withdrawal','2022-04-11 13:01:33',40),(200,1,'withdrawal','2022-04-11 13:01:39',100),(201,1,'withdrawal','2022-04-11 13:01:42',100),(202,1,'withdrawal','2022-04-11 13:01:50',222),(203,1,'withdrawal','2022-04-11 13:02:17',100),(204,1,'withdrawal','2022-04-11 13:02:42',100),(205,1,'withdrawal','2022-04-11 13:02:48',100),(206,1,'withdrawal','2022-04-11 14:12:17',100),(207,1,'withdrawal','2022-04-11 14:13:02',500),(208,1,'withdrawal','2022-04-11 14:16:28',40),(209,1,'withdrawal','2022-04-11 14:16:31',60),(210,1,'withdrawal','2022-04-11 14:16:33',20),(211,1,'withdrawal','2022-04-11 14:16:36',100),(212,1,'withdrawal','2022-04-11 14:20:17',500),(213,1,'withdrawal','2022-04-11 14:23:50',40),(214,1,'withdrawal','2022-04-11 14:23:51',40),(215,1,'withdrawal','2022-04-11 14:26:55',200),(216,1,'withdrawal','2022-04-11 14:33:09',100),(217,1,'withdrawal','2022-04-11 14:36:08',100),(218,1,'withdrawal','2022-04-11 14:38:26',100),(219,1,'withdrawal','2022-04-11 14:39:45',100),(220,1,'withdrawal','2022-04-11 14:40:06',500),(221,1,'withdrawal','2022-04-11 14:40:13',125),(222,1,'withdrawal','2022-04-11 14:41:08',20),(223,1,'withdrawal','2022-04-11 14:41:44',500),(224,1,'withdrawal','2022-04-11 14:53:02',20),(225,1,'withdrawal','2022-04-11 15:02:30',40),(226,1,'withdrawal','2022-04-11 15:10:59',20),(227,1,'withdrawal','2022-04-11 15:11:02',20),(228,1,'withdrawal','2022-04-11 15:11:03',20),(229,1,'withdrawal','2022-04-11 15:11:04',20),(230,1,'withdrawal','2022-04-11 15:11:05',40),(231,1,'withdrawal','2022-04-11 15:11:06',500),(232,1,'withdrawal','2022-04-11 15:11:06',500),(233,1,'withdrawal','2022-04-11 15:15:14',40),(234,1,'withdrawal','2022-04-11 15:15:16',20),(235,1,'withdrawal','2022-04-11 15:15:17',60),(236,1,'withdrawal','2022-04-11 15:18:23',40),(237,1,'withdrawal','2022-04-11 15:18:24',40),(238,1,'withdrawal','2022-04-11 16:00:47',40),(239,1,'withdrawal','2022-04-11 16:34:44',40),(240,1,'withdrawal','2022-04-11 16:35:57',40),(241,1,'withdrawal','2022-04-11 16:36:06',40),(242,1,'withdrawal','2022-04-11 16:46:09',40),(243,1,'withdrawal','2022-04-11 16:49:55',40),(244,1,'withdrawal','2022-04-11 16:50:13',40),(245,1,'withdrawal','2022-04-11 16:53:09',20),(246,1,'withdrawal','2022-04-11 16:53:10',200),(247,1,'withdrawal','2022-04-11 16:57:17',200),(248,1,'withdrawal','2022-04-11 16:58:51',500),(249,1,'withdrawal','2022-04-11 17:54:10',500),(250,1,'withdrawal','2022-04-11 17:54:12',20),(251,1,'withdrawal','2022-04-11 17:54:14',20),(252,1,'withdrawal','2022-04-11 17:54:14',40),(253,1,'withdrawal','2022-04-11 17:54:16',60),(254,1,'withdrawal','2022-04-11 17:54:17',100),(255,1,'withdrawal','2022-04-11 17:54:19',200),(256,1,'withdrawal','2022-04-11 17:57:42',40),(257,1,'withdrawal','2022-04-11 17:58:08',200),(258,1,'withdrawal','2022-04-11 17:58:09',500),(259,1,'withdrawal','2022-04-11 17:58:09',60),(260,1,'withdrawal','2022-04-11 17:58:10',100),(261,1,'withdrawal','2022-04-11 17:58:11',500),(262,1,'withdrawal','2022-04-11 17:58:11',60),(263,1,'withdrawal','2022-04-11 17:58:12',500),(264,1,'withdrawal','2022-04-11 17:58:13',500),(265,1,'withdrawal','2022-04-11 17:58:13',500),(266,1,'withdrawal','2022-04-11 20:05:48',40),(267,1,'withdrawal','2022-04-11 20:05:49',100),(268,1,'withdrawal','2022-04-11 20:05:49',200),(269,1,'withdrawal','2022-04-11 20:05:51',200),(270,1,'withdrawal','2022-04-11 20:05:52',100),(271,1,'withdrawal','2022-04-11 20:05:54',20),(272,1,'withdrawal','2022-04-11 20:05:55',20),(273,1,'withdrawal','2022-04-11 20:05:57',100),(274,1,'withdrawal','2022-04-11 20:05:57',100),(275,1,'withdrawal','2022-04-11 20:05:58',100),(276,1,'withdrawal','2022-04-12 07:04:14',200),(277,1,'withdrawal','2022-04-12 07:04:20',20),(278,1,'withdrawal','2022-04-12 07:11:37',200),(279,1,'withdrawal','2022-04-12 07:11:54',200),(280,1,'withdrawal','2022-04-12 07:11:56',500),(281,1,'withdrawal','2022-04-12 07:11:57',500),(282,1,'withdrawal','2022-04-12 07:11:57',500),(283,1,'withdrawal','2022-04-12 07:11:58',500),(284,1,'withdrawal','2022-04-12 07:11:58',500),(285,1,'withdrawal','2022-04-12 07:12:15',40),(286,1,'withdrawal','2022-04-12 07:12:15',40),(287,1,'withdrawal','2022-04-12 07:12:15',40),(288,1,'withdrawal','2022-04-12 07:12:15',40),(289,1,'withdrawal','2022-04-12 07:12:15',40),(290,1,'withdrawal','2022-04-12 07:12:15',40),(291,1,'withdrawal','2022-04-12 07:12:15',40),(292,1,'withdrawal','2022-04-12 07:12:16',60),(293,1,'withdrawal','2022-04-12 07:12:16',60),(294,1,'withdrawal','2022-04-12 07:12:27',13),(295,1,'withdrawal','2022-04-12 07:16:59',40),(296,1,'withdrawal','2022-04-12 07:24:27',40),(297,1,'withdrawal','2022-04-12 07:24:49',500),(298,1,'withdrawal','2022-04-12 07:24:51',40),(299,1,'withdrawal','2022-04-12 07:24:52',40),(300,1,'withdrawal','2022-04-12 07:24:52',20),(301,1,'withdrawal','2022-04-12 07:24:57',255),(302,1,'withdrawal','2022-04-12 07:25:05',25.75),(303,1,'withdrawal','2022-04-12 07:31:16',40),(304,1,'withdrawal','2022-04-12 07:31:17',20),(305,1,'withdrawal','2022-04-12 07:31:23',60),(306,1,'withdrawal','2022-04-12 07:31:24',60),(307,1,'withdrawal','2022-04-12 07:31:25',200),(308,1,'withdrawal','2022-04-12 07:31:26',500),(309,1,'withdrawal','2022-04-12 07:31:30',60),(310,1,'withdrawal','2022-04-12 07:32:16',0.3),(311,1,'withdrawal','2022-04-12 07:34:24',40),(312,1,'withdrawal','2022-04-12 07:35:14',60),(313,1,'withdrawal','2022-04-12 07:35:14',60),(314,1,'withdrawal','2022-04-12 07:35:15',40),(315,1,'withdrawal','2022-04-12 07:35:16',20),(316,1,'withdrawal','2022-04-12 07:35:17',200),(317,1,'withdrawal','2022-04-12 07:35:18',500),(318,1,'withdrawal','2022-04-12 07:35:19',20),(319,1,'withdrawal','2022-04-12 07:37:22',500),(320,1,'withdrawal','2022-04-12 07:44:04',40),(321,1,'withdrawal','2022-04-12 07:44:05',60),(322,1,'withdrawal','2022-04-12 07:44:06',500),(323,1,'withdrawal','2022-04-12 07:44:10',59),(324,1,'withdrawal','2022-04-12 07:44:12',40),(325,1,'withdrawal','2022-04-12 07:44:12',20),(326,1,'withdrawal','2022-04-12 07:44:13',60),(327,1,'withdrawal','2022-04-12 07:44:14',40),(328,1,'withdrawal','2022-04-12 07:44:14',40),(329,1,'withdrawal','2022-04-12 07:57:10',40),(330,1,'withdrawal','2022-04-12 07:57:11',60),(331,1,'withdrawal','2022-04-12 07:57:12',500),(332,1,'withdrawal','2022-04-12 07:58:59',500),(333,1,'withdrawal','2022-04-12 07:59:09',40),(334,1,'withdrawal','2022-04-12 07:59:18',250),(335,1,'withdrawal','2022-04-12 11:56:34',40),(336,1,'withdrawal','2022-04-12 11:56:51',500),(337,1,'withdrawal','2022-04-12 12:44:18',60),(338,1,'withdrawal','2022-04-12 12:44:22',500),(339,7,'withdrawal','2022-04-12 15:47:48',40),(340,7,'withdrawal','2022-04-12 15:49:13',60),(341,7,'withdrawal','2022-04-12 15:51:46',60),(342,7,'withdrawal','2022-04-12 15:51:48',500),(343,7,'withdrawal','2022-04-12 15:53:36',60),(344,7,'withdrawal','2022-04-12 15:53:38',200),(345,7,'withdrawal','2022-04-12 15:53:40',100),(346,7,'withdrawal','2022-04-12 15:56:09',255),(347,7,'withdrawal','2022-04-12 16:02:20',255),(348,5,'withdrawal','2022-04-12 18:27:43',100),(349,5,'withdrawal','2022-04-12 18:37:50',250),(350,5,'withdrawal','2022-04-12 18:38:56',40),(351,5,'withdrawal','2022-04-12 18:38:58',20),(352,5,'withdrawal','2022-04-12 18:39:00',500),(353,5,'withdrawal','2022-04-12 18:39:02',20),(354,5,'withdrawal','2022-04-12 18:39:06',40),(355,5,'withdrawal','2022-04-12 18:39:13',40),(356,5,'withdrawal','2022-04-12 18:39:14',20),(357,5,'withdrawal','2022-04-12 18:39:15',40),(358,5,'withdrawal','2022-04-12 18:39:16',60),(359,5,'withdrawal','2022-04-12 18:39:17',200),(360,5,'withdrawal','2022-04-12 18:39:19',200),(361,5,'withdrawal','2022-04-12 18:39:20',100),(362,5,'withdrawal','2022-04-12 18:39:22',200),(363,5,'withdrawal','2022-04-12 18:39:23',20),(364,5,'withdrawal','2022-04-12 18:41:16',20),(365,5,'withdrawal','2022-04-12 18:41:17',40),(366,5,'withdrawal','2022-04-12 18:41:19',100),(367,5,'withdrawal','2022-04-12 18:41:19',100),(368,5,'withdrawal','2022-04-12 18:41:20',100),(369,5,'withdrawal','2022-04-12 18:41:21',100),(370,5,'withdrawal','2022-04-12 18:41:22',20),(371,5,'withdrawal','2022-04-12 18:41:23',20),(372,5,'withdrawal','2022-04-12 18:41:23',20),(373,5,'withdrawal','2022-04-12 18:41:24',20),(374,5,'withdrawal','2022-04-12 18:41:24',20),(375,5,'withdrawal','2022-04-12 18:41:26',20),(376,5,'withdrawal','2022-04-12 18:41:27',60),(377,5,'withdrawal','2022-04-12 18:41:29',200),(378,5,'withdrawal','2022-04-12 18:41:35',500),(379,5,'withdrawal','2022-04-12 18:41:37',100),(380,5,'withdrawal','2022-04-12 18:41:38',200),(381,5,'withdrawal','2022-04-12 18:41:40',200),(382,5,'withdrawal','2022-04-12 18:41:42',60),(383,5,'withdrawal','2022-04-12 18:41:43',60),(384,5,'withdrawal','2022-04-12 18:42:49',20),(385,5,'withdrawal','2022-04-12 18:45:09',200),(386,5,'withdrawal','2022-04-12 18:45:12',500),(387,4,'withdrawal','2022-04-12 18:46:08',20),(388,4,'withdrawal','2022-04-12 18:46:09',40),(389,4,'withdrawal','2022-04-12 18:46:12',20),(390,4,'withdrawal','2022-04-12 18:46:13',40),(391,4,'withdrawal','2022-04-12 18:46:13',40),(392,4,'withdrawal','2022-04-12 18:46:21',40),(393,4,'withdrawal','2022-04-12 18:46:23',60),(394,4,'withdrawal','2022-04-12 18:46:24',500),(395,4,'withdrawal','2022-04-12 18:46:25',200),(396,4,'withdrawal','2022-04-12 18:46:26',100),(397,4,'withdrawal','2022-04-12 18:46:27',100),(398,4,'withdrawal','2022-04-12 18:46:28',100),(399,1,'withdrawal','2022-04-12 18:47:17',500),(400,1,'withdrawal','2022-04-12 18:47:19',40),(401,1,'withdrawal','2022-04-12 18:47:21',200),(402,1,'withdrawal','2022-04-12 18:47:33',40),(403,1,'withdrawal','2022-04-12 18:47:34',60),(404,1,'withdrawal','2022-04-12 18:47:38',20),(405,1,'withdrawal','2022-04-12 18:47:40',40),(406,1,'withdrawal','2022-04-12 18:47:41',20),(407,5,'withdrawal','2022-04-12 18:49:24',20),(408,5,'withdrawal','2022-04-12 18:49:25',40),(409,5,'withdrawal','2022-04-12 18:49:27',60),(410,5,'withdrawal','2022-04-12 19:15:06',555),(411,5,'withdrawal','2022-04-12 19:24:56',40),(412,5,'withdrawal','2022-04-12 19:25:00',60),(413,5,'withdrawal','2022-04-12 19:25:02',20),(414,5,'withdrawal','2022-04-12 19:25:10',6000),(415,5,'withdrawal','2022-04-12 19:25:52',6000),(416,5,'withdrawal','2022-04-13 07:55:05',200),(417,5,'withdrawal','2022-04-13 07:55:54',60),(418,5,'withdrawal','2022-04-13 07:55:55',200),(419,5,'withdrawal','2022-04-13 07:59:11',500),(420,5,'withdrawal','2022-04-13 08:00:37',20),(421,5,'withdrawal','2022-04-13 08:00:43',255),(422,7,'withdrawal','2022-04-13 09:06:08',123),(423,1,'deposit','2022-04-13 09:06:08',123),(424,5,'withdrawal','2022-04-13 09:07:35',20),(425,7,'transfer','2022-04-13 09:08:01',255),(426,1,'received','2022-04-13 09:08:01',255),(427,1,'transfer','2022-04-13 09:13:26',555),(428,7,'received','2022-04-13 09:13:26',555),(429,5,'withdrawal','2022-04-13 09:22:46',40),(430,7,'transfer','2022-04-13 09:36:38',175),(431,1,'received','2022-04-13 09:36:38',175),(432,7,'transfer','2022-04-13 09:43:11',155),(433,1,'received','2022-04-13 09:43:11',155),(434,7,'transfer','2022-04-13 09:52:56',15),(435,1,'received','2022-04-13 09:52:56',15),(436,7,'transfer','2022-04-13 09:53:56',25),(437,1,'received','2022-04-13 09:53:56',25),(438,7,'transfer','2022-04-13 09:55:10',25),(439,7,'received','2022-04-13 09:55:10',25),(440,7,'transfer','2022-04-13 09:58:07',155),(441,7,'received','2022-04-13 09:58:07',155),(442,7,'transfer','2022-04-13 09:59:18',111),(443,7,'received','2022-04-13 09:59:18',111),(444,7,'transfer','2022-04-13 09:59:55',111),(445,1,'received','2022-04-13 09:59:55',111),(446,7,'transfer','2022-04-13 10:01:34',67),(447,1,'received','2022-04-13 10:01:34',67),(448,7,'transfer','2022-04-13 10:12:22',177),(449,1,'received','2022-04-13 10:12:22',177),(450,7,'transfer','2022-04-13 10:12:55',177),(451,1,'received','2022-04-13 10:12:55',177),(452,5,'withdrawal','2022-04-13 10:23:04',55),(453,5,'withdrawal','2022-04-13 10:23:07',60),(454,5,'withdrawal','2022-04-13 10:23:15',6000),(455,5,'withdrawal','2022-04-13 10:23:18',40),(456,5,'withdrawal','2022-04-13 10:23:19',500),(457,7,'transfer','2022-04-13 10:24:42',123),(458,1,'received','2022-04-13 10:24:42',123),(459,7,'transfer','2022-04-13 10:35:39',17),(460,1,'received','2022-04-13 10:35:39',17),(461,7,'transfer','2022-04-13 10:36:18',25),(462,1,'received','2022-04-13 10:36:18',25),(463,7,'transfer','2022-04-13 10:36:30',25),(464,1,'received','2022-04-13 10:36:30',25),(465,7,'transfer','2022-04-13 10:36:32',7),(466,1,'received','2022-04-13 10:36:32',7),(467,7,'transfer','2022-04-13 10:36:36',12),(468,1,'received','2022-04-13 10:36:36',12),(469,5,'withdrawal','2022-04-13 10:37:08',60),(470,7,'transfer','2022-04-13 10:37:18',12),(471,1,'received','2022-04-13 10:37:18',12),(472,7,'transfer','2022-04-13 10:37:49',15),(473,1,'received','2022-04-13 10:37:49',15),(474,5,'withdrawal','2022-04-13 10:39:20',60),(475,5,'withdrawal','2022-04-13 10:39:32',40),(476,7,'transfer','2022-04-13 10:48:19',7),(477,1,'received','2022-04-13 10:48:19',7),(478,7,'transfer','2022-04-13 10:48:46',999),(479,1,'received','2022-04-13 10:48:46',999),(480,7,'transfer','2022-04-13 10:48:59',1356),(481,1,'received','2022-04-13 10:48:59',1356),(482,7,'transfer','2022-04-13 10:51:41',NULL),(483,7,'transfer','2022-04-13 10:52:34',71),(484,7,'transfer','2022-04-13 10:52:39',31),(485,5,'withdrawal','2022-04-13 10:54:13',40),(486,5,'withdrawal','2022-04-13 10:54:19',6),(487,7,'transfer','2022-04-13 10:54:29',88),(488,1,'received','2022-04-13 10:54:29',88),(489,7,'transfer','2022-04-13 10:54:34',88),(490,1,'received','2022-04-13 10:54:34',88),(491,1,'withdrawal','2022-04-13 10:57:04',40),(492,7,'transfer','2022-04-13 10:57:13',55),(493,1,'received','2022-04-13 10:57:13',55),(494,7,'transfer','2022-04-13 10:57:45',13),(495,1,'received','2022-04-13 10:57:45',13),(496,1,'withdrawal','2022-04-13 10:58:17',40),(497,1,'withdrawal','2022-04-13 10:58:19',500),(498,1,'withdrawal','2022-04-13 10:58:22',20),(499,1,'transfer','2022-04-13 10:58:31',99),(500,7,'received','2022-04-13 10:58:31',99),(501,1,'transfer','2022-04-13 10:58:47',55),(502,7,'received','2022-04-13 10:58:47',55),(503,1,'transfer','2022-04-13 10:59:00',45),(504,7,'received','2022-04-13 10:59:00',45),(505,1,'transfer','2022-04-13 11:00:20',25),(506,7,'received','2022-04-13 11:00:20',25),(507,1,'transfer','2022-04-13 11:00:41',15),(508,7,'received','2022-04-13 11:00:41',15),(509,1,'transfer','2022-04-13 11:01:52',6),(510,7,'received','2022-04-13 11:01:52',6),(511,1,'transfer','2022-04-13 11:02:05',33),(512,7,'received','2022-04-13 11:02:05',33),(513,1,'transfer','2022-04-13 11:06:08',77),(514,7,'received','2022-04-13 11:06:08',77),(515,1,'transfer','2022-04-13 11:07:04',42),(516,7,'received','2022-04-13 11:07:04',42),(517,1,'transfer','2022-04-13 11:08:30',5),(518,7,'received','2022-04-13 11:08:30',5),(519,1,'transfer','2022-04-13 11:08:32',15),(520,7,'received','2022-04-13 11:08:32',15),(521,7,'transfer','2022-04-13 11:09:55',7),(522,1,'received','2022-04-13 11:09:55',7),(523,7,'transfer','2022-04-13 11:09:59',7),(524,1,'received','2022-04-13 11:09:59',7),(525,7,'transfer','2022-04-13 11:10:01',77),(526,1,'received','2022-04-13 11:10:01',77),(527,7,'transfer','2022-04-13 11:10:03',8),(528,1,'received','2022-04-13 11:10:03',8),(529,1,'transfer','2022-04-13 11:10:21',500),(530,7,'received','2022-04-13 11:10:21',500),(531,1,'transfer','2022-04-13 11:10:28',500),(532,7,'received','2022-04-13 11:10:28',500),(533,7,'transfer','2022-04-13 11:11:02',270),(534,1,'received','2022-04-13 11:11:02',270),(535,1,'transfer','2022-04-13 11:20:13',255),(536,3,'received','2022-04-13 11:20:13',255),(537,6,'withdrawal','2022-04-13 11:33:42',40),(538,6,'withdrawal','2022-04-13 11:33:46',500),(539,6,'withdrawal','2022-04-13 11:33:48',40),(540,6,'withdrawal','2022-04-13 11:33:49',200),(541,6,'withdrawal','2022-04-13 11:33:51',100),(542,6,'withdrawal','2022-04-13 11:33:52',500),(543,6,'withdrawal','2022-04-13 11:33:53',20),(544,6,'withdrawal','2022-04-13 11:33:54',40),(545,6,'withdrawal','2022-04-13 11:33:55',60),(546,6,'withdrawal','2022-04-13 11:33:56',100),(547,6,'withdrawal','2022-04-13 11:33:58',40),(548,7,'transfer','2022-04-13 11:34:11',123),(549,1,'received','2022-04-13 11:34:11',123),(550,7,'transfer','2022-04-13 11:34:27',222),(551,1,'received','2022-04-13 11:34:27',222),(552,7,'transfer','2022-04-13 11:34:32',333),(553,1,'received','2022-04-13 11:34:32',333),(554,6,'withdrawal','2022-04-13 11:39:33',40),(555,6,'withdrawal','2022-04-13 11:44:11',40),(556,8,'transfer','2022-04-13 11:44:25',17),(557,1,'received','2022-04-13 11:44:25',17),(558,6,'withdrawal','2022-04-13 13:19:20',20),(559,6,'transfer','2022-04-13 13:19:26',255),(560,1,'received','2022-04-13 13:19:26',255),(561,6,'transfer','2022-04-13 13:26:34',20.75),(562,5,'received','2022-04-13 13:26:34',20.75),(563,6,'withdrawal','2022-04-13 14:35:25',40),(564,6,'withdrawal','2022-04-13 14:55:18',40),(565,6,'withdrawal','2022-04-13 14:55:25',60),(566,6,'transfer','2022-04-13 14:55:31',15),(567,1,'received','2022-04-13 14:55:31',15),(568,6,'withdrawal','2022-04-13 16:04:37',200),(569,6,'withdrawal','2022-04-14 07:42:05',500),(570,6,'withdrawal','2022-04-14 07:59:31',500),(571,6,'withdrawal','2022-04-14 08:07:30',40),(572,6,'withdrawal','2022-04-14 08:07:31',500),(573,6,'withdrawal','2022-04-14 08:07:33',500),(574,6,'withdrawal','2022-04-14 08:32:56',40),(575,6,'withdrawal','2022-04-14 08:32:57',500),(576,6,'transfer','2022-04-14 08:33:01',255),(577,1,'received','2022-04-14 08:33:01',255),(578,6,'withdrawal','2022-04-14 08:34:13',60),(579,6,'transfer','2022-04-14 08:34:18',1),(580,5,'received','2022-04-14 08:34:18',1),(581,6,'withdrawal','2022-04-14 08:34:21',200),(582,6,'withdrawal','2022-04-14 08:34:22',500),(583,6,'withdrawal','2022-04-14 10:36:39',200),(584,6,'withdrawal','2022-04-14 10:36:40',500),(585,6,'withdrawal','2022-04-14 10:47:46',500),(586,6,'withdrawal','2022-04-14 10:52:45',40),(587,6,'withdrawal','2022-04-14 10:54:05',40),(588,6,'withdrawal','2022-04-14 10:58:21',40),(589,6,'transfer','2022-04-14 11:02:15',555),(590,1,'received','2022-04-14 11:02:15',555),(591,6,'withdrawal','2022-04-14 12:03:04',40);
/*!40000 ALTER TABLE `account_action` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `bank_account`
--

DROP TABLE IF EXISTS `bank_account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `bank_account` (
  `id_bank_account` int NOT NULL AUTO_INCREMENT,
  `account_number` varchar(45) DEFAULT NULL,
  `balance` double DEFAULT NULL,
  PRIMARY KEY (`id_bank_account`),
  UNIQUE KEY `account_number_UNIQUE` (`account_number`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bank_account`
--

LOCK TABLES `bank_account` WRITE;
/*!40000 ALTER TABLE `bank_account` DISABLE KEYS */;
INSERT INTO `bank_account` VALUES (1,'FI12341234',11569),(2,'FI21123224',1500),(3,'FI99998888',2695),(7,'FI0101010101',12343.75),(8,'FI20001000',12100.25);
/*!40000 ALTER TABLE `bank_account` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `card`
--

DROP TABLE IF EXISTS `card`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `card` (
  `id_card` int NOT NULL AUTO_INCREMENT,
  `cardnumber` int DEFAULT NULL,
  `pincode` varchar(255) DEFAULT NULL,
  `id_client` int NOT NULL DEFAULT '0',
  `id_bank_account` int NOT NULL DEFAULT '0',
  `locked` tinyint DEFAULT '0',
  PRIMARY KEY (`id_card`),
  UNIQUE KEY `cardnumber_UNIQUE` (`cardnumber`),
  KEY `fk_card_client1_idx` (`id_client`),
  KEY `fk_card_bank_account1_idx` (`id_bank_account`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `card`
--

LOCK TABLES `card` WRITE;
/*!40000 ALTER TABLE `card` DISABLE KEYS */;
INSERT INTO `card` VALUES (6,4321,'$2a$10$pwwvCFEdYNkiWtPHaJCNhuFkVWPGp.xjG/La4miShXe.JVhc17fxi',1,1,0),(10,22221111,'1111',3,2,0),(11,1234,'$2a$10$DDqaCUFi5E.9mrnvYGWFq..WEiAPDOvbWaCR4e7KrkWZNplVOH/8i',4,3,0),(13,9999,'$2a$10$fVSaQUtumt3gUpDonpkCj.QMqWQXZtItxkDbdl0C5a3ScXKx9Ejbi',5,7,0),(14,1111,'$2a$10$v4jEnfsvtozZrr1b9XytF.QsnfKCe2Z8VTPXZ4MsTrceSJ/MQJF3.',6,8,0);
/*!40000 ALTER TABLE `card` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `client`
--

DROP TABLE IF EXISTS `client`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `client` (
  `id_client` int NOT NULL AUTO_INCREMENT,
  `name` varchar(45) DEFAULT NULL,
  `address` varchar(45) DEFAULT NULL,
  `pnumber` int DEFAULT NULL,
  PRIMARY KEY (`id_client`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `client`
--

LOCK TABLES `client` WRITE;
/*!40000 ALTER TABLE `client` DISABLE KEYS */;
INSERT INTO `client` VALUES (1,'Kari','Testaajantie',123456789),(3,'Jukka','Testitie 2',12343333),(4,'Jorma','Tie',1010101),(5,'Aku','Ankkatie',404404),(6,'Sale','Rantatie',272727);
/*!40000 ALTER TABLE `client` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `client_has_bank_account`
--

DROP TABLE IF EXISTS `client_has_bank_account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `client_has_bank_account` (
  `id_client` int NOT NULL,
  `id_bank_account` int NOT NULL,
  PRIMARY KEY (`id_client`,`id_bank_account`),
  KEY `fk_client_has_bank_account_bank_account1_idx` (`id_bank_account`),
  KEY `fk_client_has_bank_account_client_idx` (`id_client`),
  CONSTRAINT `fk_client_has_bank_account_bank_account1` FOREIGN KEY (`id_bank_account`) REFERENCES `bank_account` (`id_bank_account`),
  CONSTRAINT `fk_client_has_bank_account_client` FOREIGN KEY (`id_client`) REFERENCES `client` (`id_client`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `client_has_bank_account`
--

LOCK TABLES `client_has_bank_account` WRITE;
/*!40000 ALTER TABLE `client_has_bank_account` DISABLE KEYS */;
INSERT INTO `client_has_bank_account` VALUES (1,1),(3,2),(4,3),(5,7),(6,8);
/*!40000 ALTER TABLE `client_has_bank_account` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'bankautomat'
--
/*!50003 DROP PROCEDURE IF EXISTS `credit_transfer` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `credit_transfer`(IN first_id INT, IN second_id INT, IN amount DOUBLE )
BEGIN
  DECLARE test1,test2, client1, client2 INT DEFAULT 0;
  /*haetaan asiakasID tilinID:llä */
SELECT client.id_client INTO client1 FROM bank_account
JOIN card
ON card.id_bank_account = bank_account.id_bank_account
JOIN client
ON client.id_client = card.id_client
WHERE bank_account.id_bank_account=first_id;

SELECT client.id_client INTO client2 FROM bank_account
JOIN card
ON card.id_bank_account = bank_account.id_bank_account
JOIN client
ON client.id_client = card.id_client
WHERE bank_account.id_bank_account=second_id;
  

  START TRANSACTION;
  
  UPDATE bank_account SET balance=balance-amount WHERE bank_account.id_bank_account=first_id;
  SET test1=ROW_COUNT();
  UPDATE bank_account SET balance=balance+amount WHERE bank_account.id_bank_account=second_id;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN   
      COMMIT;    
      INSERT INTO account_action VALUES(NULL, client1,'transfer',NOW(),amount);
      INSERT INTO account_action VALUES(NULL, client2,'received',NOW(),amount);
	/*INSERT INTO account_action VALUES(NULL, client_id,'withdrawal',NOW(), amount);*/
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `credit_withdrawal` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `credit_withdrawal`(IN acc_id INT, IN client_id INT, amount DOUBLE )
BEGIN
  DECLARE test1 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE bank_account SET balance=balance-amount WHERE id_bank_account=acc_id;
  SET test1=ROW_COUNT();
    IF (test1 > 0) THEN
      COMMIT;
      INSERT INTO account_action VALUES(NULL, client_id,'withdrawal',NOW(), amount);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_transfer` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `debit_transfer`(IN first_id INT, IN second_id INT, IN amount DOUBLE )
BEGIN
  DECLARE test1, test2 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE bank_account SET balance=balance-amount WHERE id_bank_account=first_id AND balance>=amount;
  SET test1=ROW_COUNT();
  UPDATE bank_account SET balance=balance+amount WHERE id_bank_account=second_id;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN
      COMMIT;
      INSERT INTO account_action VALUES(NULL, first_id,'withdrawal',NOW(), amount);
      INSERT INTO account_action VALUES(NULL, second_id,'deposit',NOW(), amount);
    ELSE
      ROLLBACK;
  END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `next10actions` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `next10actions`()
BEGIN
	DECLARE myvar int;
	SELECT count(*)-1 INTO myvar FROM account_action;
	SELECT * FROM account_action WHERE id_account_action > myvar ORDER BY id_account_action LIMIT 10;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `previous10actions` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `previous10actions`(in arvo INT, in id INT)
BEGIN
	DECLARE myvar int;
	SELECT count(*) INTO myvar FROM account_action;
	SELECT * FROM account_action WHERE id_account_action <= myvar-arvo AND id_client = id ORDER BY id_account_action DESC LIMIT 10;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `withdrawal` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `withdrawal`(IN first_id INT, IN amount DOUBLE )
BEGIN
  DECLARE test1 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE bank_account SET balance=balance-amount WHERE id_bank_account=first_id AND balance>=amount;
  SET test1=ROW_COUNT();
    IF (test1 > 0 AND balance>= amount) THEN
      COMMIT;
      INSERT INTO action VALUES(NULL, first_id,'withdrawal',NOW(), amount);
    ELSE
      ROLLBACK;
  END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-14 15:30:14