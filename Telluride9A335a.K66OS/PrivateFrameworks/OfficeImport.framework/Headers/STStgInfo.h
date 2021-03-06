/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface STStgInfo : NSObject {
@private
	NSString *m_pstrName;	// 4 = 0x4
	int m_type;	// 8 = 0x8
	unsigned long m_userFlags;	// 12 = 0xc
	unsigned long m_size;	// 16 = 0x10
	int m_creationTime;	// 20 = 0x14
	int m_modificationTime;	// 24 = 0x18
	int m_accessMode;	// 28 = 0x1c
	SSRW_GUID m_clsid;	// 32 = 0x20
}
- (id)init;	// 0x353e9a5d
- (id)initWithStgInfo:(StgInfo *)stgInfo;	// 0x353e9bd9
- (void)dealloc;	// 0x353e9b8d
- (int)getAccessMode;	// 0x353e99f5
- (SSRW_GUID)getCLSID;	// 0x353e9a15
- (long)getCreationTime;	// 0x353e99b5
- (long)getModificationTime;	// 0x353e99d5
- (id)getName;	// 0x353e9945
- (unsigned long)getSize;	// 0x353e9995
- (int)getType;	// 0x353e9955
- (unsigned long)getUserFlags;	// 0x353e9975
- (void)setAccessMode:(int)mode;	// 0x353e9a05
- (void)setCLSID:(SSRW_GUID)clsid;	// 0x353e9a39
- (void)setCreationTime:(long)time;	// 0x353e99c5
- (void)setModificationTime:(long)time;	// 0x353e99e5
- (void)setName:(id)name;	// 0x353e9b4d
- (void)setSize:(unsigned long)size;	// 0x353e99a5
- (void)setType:(int)type;	// 0x353e9965
- (void)setUserFlags:(unsigned long)flags;	// 0x353e9985
@end

