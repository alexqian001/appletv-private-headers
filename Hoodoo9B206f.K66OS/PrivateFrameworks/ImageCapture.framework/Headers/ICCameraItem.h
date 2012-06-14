/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate, NSDictionary;

@interface ICCameraItem : NSObject {
@private
	void *_itemProperties;	// 4 = 0x4
}
@property(readonly, assign) NSString *UTI;	// G=0x30c09bd9; 
@property(readonly, assign) NSDate *creationDate;	// G=0x30c09c1d; 
@property(readonly, assign) ICCameraDevice *device;	// G=0x30c09b31; 
@property(readonly, assign) NSString *fileSystemPath;	// G=0x30c09da9; 
@property(readonly, assign) BOOL hasMetadata;	// G=0x30c09ad5; 
@property(readonly, assign) BOOL hasThumbnail;	// G=0x30c09acd; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x30c09b91; S=0x30c09bb5; 
@property(readonly, assign) NSDictionary *metadata;	// G=0x30c09ad9; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x30c09c61; 
@property(readonly, assign) NSString *name;	// G=0x30c09b71; 
@property(readonly, assign) ICCameraFolder *parentFolder;	// G=0x30c09b51; 
@property(readonly, assign) CGImageRef thumbnail;	// G=0x30c09ad1; 
@property(readonly, assign) NSMutableDictionary *userData;	// G=0x30c09ca5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x30c0a265
// declared property getter: - (id)UTI;	// 0x30c09bd9
- (void)appendToPath:(id)path;	// 0x30c09cc5
// declared property getter: - (id)creationDate;	// 0x30c09c1d
- (void)dealloc;	// 0x30c0a3d5
- (id)description;	// 0x30c09e19
// declared property getter: - (id)device;	// 0x30c09b31
// declared property getter: - (id)fileSystemPath;	// 0x30c09da9
- (void)finalize;	// 0x30c0a381
- (void)flushMetadataCache;	// 0x30c09ae9
- (void)flushThumbnailCache;	// 0x30c09ae5
// declared property getter: - (BOOL)hasMetadata;	// 0x30c09ad5
// declared property getter: - (BOOL)hasThumbnail;	// 0x30c09acd
// declared property getter: - (BOOL)isLocked;	// 0x30c09b91
// declared property getter: - (id)metadata;	// 0x30c09ad9
// declared property getter: - (id)modificationDate;	// 0x30c09c61
// declared property getter: - (id)name;	// 0x30c09b71
// declared property getter: - (id)parentFolder;	// 0x30c09b51
- (void)requestMetadata;	// 0x30c09ae1
- (void)requestThumbnail;	// 0x30c09add
- (void)setCreationDate:(id)date;	// 0x30c09c3d
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x30c09bb5
- (void)setModificationDate:(id)date;	// 0x30c09c81
- (void)setUTI:(id)uti;	// 0x30c09bf9
// declared property getter: - (CGImageRef)thumbnail;	// 0x30c09ad1
// declared property getter: - (id)userData;	// 0x30c09ca5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30c09aed
@end
