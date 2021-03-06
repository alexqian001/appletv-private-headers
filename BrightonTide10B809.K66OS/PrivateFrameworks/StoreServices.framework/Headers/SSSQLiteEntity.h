/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSSQLiteEntity.h"
#import "NSObject.h"

@class SSSQLiteDatabase;

@protocol SSSQLiteEntity <NSObject>
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;
+ (id)disambiguatedSQLForProperty:(id)property;
+ (id)foreignDatabaseColumnForProperty:(id)property;
+ (id)foreignDatabaseTableForProperty:(id)property;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)table;
+ (id)joinClauseForProperty:(id)property;
- (id)copyValuesForClientProperties:(id)clientProperties;
- (id)copyXPCEncodedValuesForClientProperties:(id)clientProperties;
- (BOOL)deleteFromDatabase;
- (void)getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)setValuesWithDictionary:(id)dictionary;
- (id)valueForProperty:(id)property;
@end

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {
	SSSQLiteDatabase *_database;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) SSSQLiteDatabase *database;	// G=0x3550d351; @synthesize=_database
@property(readonly, assign, nonatomic) BOOL existsInDatabase;	// G=0x3550b8e9; 
@property(readonly, assign, nonatomic) long long persistentID;	// G=0x3550d361; @synthesize=_persistentID
+ (id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database;	// 0x35510591
+ (BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)persistentID database:(id)database;	// 0x3550ca41
+ (id)anyInDatabase:(id)database predicate:(id)predicate;	// 0x35510375
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;	// 0x3550b169
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;	// 0x3550b2bd
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;	// 0x3550b2c1
+ (id)databaseTable;	// 0x3550b2c9
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;	// 0x3550b2c5
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x3550b311
+ (id)foreignDatabaseColumnForProperty:(id)property;	// 0x3550b375
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x3550b379
+ (id)foreignDatabaseTablesToDelete;	// 0x3550b37d
+ (id)foreignKeyColumnForTable:(id)table;	// 0x3550b381
+ (id)joinClauseForProperty:(id)property;	// 0x3550b385
+ (id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x355108e9
+ (Class)memoryEntityClass;	// 0x3550b389
+ (id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x35510915
+ (id)queryWithDatabase:(id)database predicate:(id)predicate;	// 0x35510941
+ (id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;	// 0x35510965
- (id)initWithPersistentID:(long long)persistentID inDatabase:(id)database;	// 0x3550ad75
- (id)initWithPropertyValues:(id)propertyValues inDatabase:(id)database;	// 0x3550adc9
- (id)_copyTableClusteredValuesWithValues:(id)values;	// 0x3550cf25
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x3550d125
- (id)copyValuesForClientProperties:(id)clientProperties;	// 0x3550b3a5
- (id)copyXPCEncodedValuesForClientProperties:(id)clientProperties;	// 0x3550b515
// declared property getter: - (id)database;	// 0x3550d351
- (BOOL)deleteFromDatabase;	// 0x3550b625
// declared property getter: - (BOOL)existsInDatabase;	// 0x3550b8e9
- (void)getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x3550bb49
// declared property getter: - (long long)persistentID;	// 0x3550d361
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x3550bf11
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x3550bfad
- (id)valueForProperty:(id)property;	// 0x3550ca15
@end

