/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSMappingModel, NSSQLiteConnection, NSArray, NSMutableDictionary, NSMutableArray, NSString;

@interface _NSSQLiteStoreMigrator : NSObject {

	NSSQLCore* _store;
	NSSQLModel* _dstModel;
	NSSQLModel* _srcModel;
	NSSQLiteAdapter* _adapter;
	NSMappingModel* _mappingModel;
	NSSQLiteConnection* _connection;
	NSArray* _tableGenerationSQL;
	NSArray* _existingTableNames;
	NSMutableDictionary* _reindexedEntities;
	NSMutableDictionary* _reindexedPropertiesByEntity;
	NSMutableDictionary* _sourceToDestinationEntityMap;
	NSMutableDictionary* _addedEntityMigrations;
	NSMutableDictionary* _removedEntityMigrations;
	NSMutableDictionary* _transformedEntityMigrations;
	NSMutableDictionary* _copiedEntityMigrations;
	NSMutableDictionary* _tableMigrationDescriptionsByEntity;
	BOOL _hasPKTableChanges;
	NSMutableArray* _pkTableUpdateStatements;
	NSMutableDictionary* _attributeExtensionsToUpdate;
	NSMutableArray* _indexesToCreate;
	NSMutableArray* _indexesToDrop;
	NSMutableArray* _defaultValueStatements;
	NSMutableArray* _derivationsToDrop;
	NSMutableArray* _derivationsToRun;
	NSMutableDictionary* _historyMigrationPropertyDataForEntityCache;
	NSMutableArray* _cloudKitUpdateStatements;
	BOOL _hasCloudKitTables;
	BOOL _hasDeferredLightweightMigration;
	NSString* _destinationConfigurationForCloudKitValidation;

}

@property (nonatomic,retain) NSString * destinationConfigurationForCloudKitValidation;              //@synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation - In the implementation block
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)destinationConfigurationForCloudKitValidation;
-(void)setDestinationConfigurationForCloudKitValidation:(NSString *)arg1 ;
@end

