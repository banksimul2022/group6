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
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_action`
--

LOCK TABLES `account_action` WRITE;
/*!40000 ALTER TABLE `account_action` DISABLE KEYS */;
INSERT INTO `account_action` VALUES (1,1,'nosto','2022-04-04 07:20:44',50),(2,1,'nosto','2022-04-04 07:25:04',20),(3,2,'nosto','2022-04-04 07:26:07',10),(4,2,'nosto','2022-04-04 07:26:13',100),(5,2,'nosto','2022-04-04 07:35:36',100),(6,2,'nosto','2022-04-04 07:47:43',200),(7,1,'nosto','2022-04-04 07:47:52',100);
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
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bank_account`
--

LOCK TABLES `bank_account` WRITE;
/*!40000 ALTER TABLE `bank_account` DISABLE KEYS */;
INSERT INTO `bank_account` VALUES (1,'FI12341234',500),(2,'FI21123224',1500),(3,'FI99998888',2000);
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
  PRIMARY KEY (`id_card`),
  UNIQUE KEY `cardnumber_UNIQUE` (`cardnumber`),
  KEY `fk_card_client1_idx` (`id_client`),
  KEY `fk_card_bank_account1_idx` (`id_bank_account`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `card`
--

LOCK TABLES `card` WRITE;
/*!40000 ALTER TABLE `card` DISABLE KEYS */;
INSERT INTO `card` VALUES (6,88889999,'$2a$10$85uuWTppXShbYbtvAquuAOqwshMKAb25km.zeSDjDLPBfMmc2nDA6',1,1),(10,22221111,'1111',3,2),(11,1234,'$2a$10$DDqaCUFi5E.9mrnvYGWFq..WEiAPDOvbWaCR4e7KrkWZNplVOH/8i',4,3);
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
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `client`
--

LOCK TABLES `client` WRITE;
/*!40000 ALTER TABLE `client` DISABLE KEYS */;
INSERT INTO `client` VALUES (1,'Kari','Testaajantie',123456789),(3,'Jukka','Testitie 2',12343333),(4,'Jorma','Tie',1010101);
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
INSERT INTO `client_has_bank_account` VALUES (1,1),(3,2),(4,3);
/*!40000 ALTER TABLE `client_has_bank_account` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-04 18:34:13
