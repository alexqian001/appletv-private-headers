/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate;

@interface ICCameraItemProperties : NSObject {
	ICCameraDevice *_device;	// 4 = 0x4
	ICCameraFolder *_parentFolder;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_UTI;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
	NSDate *_modificationDate;	// 24 = 0x18
	BOOL _locked;	// 28 = 0x1c
	NSMutableDictionary *_userData;	// 32 = 0x20
}
@property(retain) NSString *UTI;	// G=0x325fb0f9; S=0x325fb0d5; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0x325fb135; S=0x325fb111; @synthesize=_creationDate
@property(assign) ICCameraDevice *device;	// G=0x325faac5; S=0x325faad5; @synthesize=_device
@property(assign) BOOL locked;	// G=0x325faa85; S=0x325faa95; @synthesize=_locked
@property(retain) NSDate *modificationDate;	// G=0x325fb171; S=0x325fb14d; @synthesize=_modificationDate
@property(retain) NSString *name;	// G=0x325fb0bd; S=0x325fb099; @synthesize=_name
@property(assign) ICCameraFolder *parentFolder;	// G=0x325faaa5; S=0x325faab5; @synthesize=_parentFolder
@property(retain) NSMutableDictionary *userData;	// G=0x325fb1ad; S=0x325fb189; @synthesize=_userData
// declared property getter: - (id)UTI;	// 0x325fb0f9
// declared property getter: - (id)creationDate;	// 0x325fb135
- (void)dealloc;	// 0x325fafe1
// declared property getter: - (id)device;	// 0x325faac5
- (void)finalize;	// 0x325fb1c5
// declared property getter: - (BOOL)locked;	// 0x325faa85
// declared property getter: - (id)modificationDate;	// 0x325fb171
// declared property getter: - (id)name;	// 0x325fb0bd
// declared property getter: - (id)parentFolder;	// 0x325faaa5
// declared property setter: - (void)setCreationDate:(id)date;	// 0x325fb111
// declared property setter: - (void)setDevice:(id)device;	// 0x325faad5
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x325faa95
// declared property setter: - (void)setModificationDate:(id)date;	// 0x325fb14d
// declared property setter: - (void)setName:(id)name;	// 0x325fb099
// declared property setter: - (void)setParentFolder:(id)folder;	// 0x325faab5
// declared property setter: - (void)setUTI:(id)uti;	// 0x325fb0d5
// declared property setter: - (void)setUserData:(id)data;	// 0x325fb189
// declared property getter: - (id)userData;	// 0x325fb1ad
@end

