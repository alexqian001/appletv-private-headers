/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "NSCoding.h"

@class NSArray;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {
	NSArray *_validDownloads;	// 4 = 0x4
}
@property(copy) NSArray *validDownloads;	// G=0x354b98a9; S=0x354b98b9; 
- (id)initWithCoder:(id)coder;	// 0x354b98fd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354b9bc5
- (id)copyXPCEncoding;	// 0x354b9ac5
- (void)dealloc;	// 0x354b985d
- (void)encodeWithCoder:(id)coder;	// 0x354b99fd
// declared property setter: - (void)setValidDownloads:(id)downloads;	// 0x354b98b9
// declared property getter: - (id)validDownloads;	// 0x354b98a9
@end

