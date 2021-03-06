/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSData, NSDate, NSString;

@interface MBProperties : NSObject {
	NSMutableDictionary *_plist;	// 4 = 0x4
	BOOL _protect;	// 8 = 0x8
@private
	BOOL _protected;	// 9 = 0x9
}
@property(readonly, assign, nonatomic) NSDictionary *appleIDs;	// G=0x3159d221; 
@property(readonly, assign, nonatomic) NSDictionary *applications;	// G=0x3159d509; 
@property(readonly, assign, nonatomic) NSString *buildVersion;	// G=0x3159d149; 
@property(retain, nonatomic) NSDate *date;	// G=0x3159cdc1; S=0x3159ce79; 
@property(readonly, assign, nonatomic) NSString *deviceID;	// G=0x3159d039; 
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x3159d059; 
@property(assign, nonatomic, getter=isEncrypted) BOOL encrypted;	// G=0x3159cea1; S=0x3159cec1; 
@property(readonly, assign, nonatomic) BOOL hasCorruptSQLiteDBs;	// G=0x3159d169; 
@property(retain, nonatomic) NSData *keybagData;	// G=0x3159cedd; S=0x3159cef9; 
@property(retain, nonatomic) NSDictionary *lockdownKeys;	// G=0x3159cf51; S=0x3159cf6d; 
@property(assign, nonatomic, getter=wasPasscodeSet) BOOL passcodeSet;	// G=0x3159cf15; S=0x3159cf35; 
@property(readonly, assign, nonatomic) NSString *productType;	// G=0x3159d129; 
@property(readonly, assign, nonatomic) id propertyList;	// G=0x3159d9f1; @synthesize=_plist
@property(assign, nonatomic, getter=isProtected) BOOL protected;	// G=0x3159da01; S=0x3159da11; @synthesize=_protected
@property(readonly, assign, nonatomic) NSString *serialNumber;	// G=0x3159d109; 
@property(assign, nonatomic) double systemDomainsVersion;	// G=0x3159cc91; S=0x3159cd59; 
@property(assign, nonatomic) double version;	// G=0x3159cb29; S=0x3159cc29; 
+ (id)properties;	// 0x3159c3a1
+ (id)propertiesWithFile:(id)file error:(id *)error;	// 0x3159c3e5
- (id)init;	// 0x3159c431
- (id)initWithData:(id)data error:(id *)error;	// 0x3159c539
- (id)initWithFile:(id)file error:(id *)error;	// 0x3159c769
- (BOOL)_boolForKey:(id)key;	// 0x3159c865
- (id)_dataForKey:(id)key;	// 0x3159c979
- (id)_dictionaryForKey:(id)key;	// 0x3159ca51
- (void)_setBool:(BOOL)aBool forKey:(id)key;	// 0x3159c92d
- (void)_setData:(id)data forKey:(id)key;	// 0x3159ca31
- (void)_setDictionary:(id)dictionary forKey:(id)key;	// 0x3159cb09
- (id)_stringForLockdownKey:(id)lockdownKey;	// 0x3159cf89
- (void)addApp:(id)app;	// 0x3159d649
- (void)addAppleIDsFromSet:(id)set;	// 0x3159d311
- (void)addAppsFromArray:(id)array;	// 0x3159d79d
- (id)appWithBundleID:(id)bundleID;	// 0x3159d5f5
// declared property getter: - (id)appleIDs;	// 0x3159d221
// declared property getter: - (id)applications;	// 0x3159d509
// declared property getter: - (id)buildVersion;	// 0x3159d149
// declared property getter: - (id)date;	// 0x3159cdc1
- (void)dealloc;	// 0x3159c7b9
- (id)description;	// 0x3159d901
// declared property getter: - (id)deviceID;	// 0x3159d039
// declared property getter: - (id)deviceName;	// 0x3159d059
// declared property getter: - (BOOL)hasCorruptSQLiteDBs;	// 0x3159d169
// declared property getter: - (BOOL)isEncrypted;	// 0x3159cea1
// declared property getter: - (BOOL)isProtected;	// 0x3159da01
// declared property getter: - (id)keybagData;	// 0x3159cedd
// declared property getter: - (id)lockdownKeys;	// 0x3159cf51
- (id)objectForKey:(id)key;	// 0x3159c805
// declared property getter: - (id)productType;	// 0x3159d129
// declared property getter: - (id)propertyList;	// 0x3159d9f1
- (void)removeObjectForKey:(id)key;	// 0x3159c845
// declared property getter: - (id)serialNumber;	// 0x3159d109
// declared property setter: - (void)setDate:(id)date;	// 0x3159ce79
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x3159cec1
// declared property setter: - (void)setKeybagData:(id)data;	// 0x3159cef9
// declared property setter: - (void)setLockdownKeys:(id)keys;	// 0x3159cf6d
- (void)setObject:(id)object forKey:(id)key;	// 0x3159c825
// declared property setter: - (void)setPasscodeSet:(BOOL)set;	// 0x3159cf35
// declared property setter: - (void)setProtected:(BOOL)aProtected;	// 0x3159da11
// declared property setter: - (void)setSystemDomainsVersion:(double)version;	// 0x3159cd59
// declared property setter: - (void)setVersion:(double)version;	// 0x3159cc29
// declared property getter: - (double)systemDomainsVersion;	// 0x3159cc91
// declared property getter: - (double)version;	// 0x3159cb29
// declared property getter: - (BOOL)wasPasscodeSet;	// 0x3159cf15
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x3159d855
@end

