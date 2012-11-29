/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library


@interface MBDigest : NSObject {
}
+ (id)sha1;	// 0x306e3805
+ (id)sha1ForData:(id)data;	// 0x306e3849
+ (id)sha1ForFileAtPath:(id)path error:(id *)error;	// 0x306e3899
+ (id)sha1ForString:(id)string;	// 0x306e38f5
- (id)final;	// 0x306e3bd1
- (void)finalWithBytes:(void *)bytes length:(unsigned)length;	// 0x306e3bbd
- (void)updateWithBytes:(const void *)bytes length:(unsigned)length;	// 0x306e3985
- (void)updateWithData:(id)data;	// 0x306e3999
- (void)updateWithDate:(id)date;	// 0x306e39fd
- (BOOL)updateWithFile:(id)file error:(id *)error;	// 0x306e3a31
- (void)updateWithInt32:(int)int32;	// 0x306e3945
- (void)updateWithInt64:(int)int64;	// 0x306e3965
- (void)updateWithString:(id)string;	// 0x306e3aa1
@end
