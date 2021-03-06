/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSString;

@interface PFUbiquityContainerIdentifier : NSObject {
	NSString *_storeName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	NSString *_uuidString;	// 16 = 0x10
	PFUbiquityLocation *_uuidFileLocation;	// 20 = 0x14
	BOOL _usedExistingUUIDFile;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL usedExistingUUIDFile;	// G=0x30fe7d75; @synthesize=_usedExistingUUIDFile
@property(readonly, assign, nonatomic) PFUbiquityLocation *uuidFileLocation;	// G=0x30fe7d65; @synthesize=_uuidFileLocation
@property(readonly, assign, nonatomic) NSString *uuidString;	// G=0x30fe7d55; @synthesize=_uuidString
- (id)init;	// 0x30fe742d
- (id)initWithLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x30fe74b5
- (void)dealloc;	// 0x30fe7531
- (BOOL)identifyContainer:(id *)container;	// 0x30fe77a5
- (BOOL)replaceIdentifierWithUUID:(id)uuid error:(id *)error;	// 0x30fe7bd5
- (void)setUUIDStringFromLocation:(id)location;	// 0x30fe75f1
// declared property getter: - (BOOL)usedExistingUUIDFile;	// 0x30fe7d75
// declared property getter: - (id)uuidFileLocation;	// 0x30fe7d65
// declared property getter: - (id)uuidString;	// 0x30fe7d55
- (BOOL)writeToDisk:(id *)disk;	// 0x30fe76a1
@end

