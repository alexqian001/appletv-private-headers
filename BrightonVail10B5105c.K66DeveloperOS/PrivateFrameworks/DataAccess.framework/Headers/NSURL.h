/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSURL.h> // Unknown library


@interface NSURL (DAKeychainAddition)
- (id)URLByRemovingLastPathComponent;	// 0x35e40fa9
- (id)URLWithUsername:(id)username;	// 0x35e412b9
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x35e410a1
- (id)URLWithoutUsername;	// 0x35e40ef1
- (id)uri;	// 0x35e40e59
@end

@interface NSURL (DAExtensions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x35e48495
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x35e48659
+ (id)URLWithScheme:(id)scheme host:(id)host user:(id)user port:(int)port uri:(id)uri;	// 0x35e48559
+ (int)classicPortForScheme:(id)scheme;	// 0x35e4868d
- (BOOL)isEqualToDAVURL:(id)davurl;	// 0x35e47ac5
- (id)pathWithoutTrailingRemovingSlash;	// 0x35e48409
- (id)rawPath;	// 0x35e483ed
- (id)urlByRemovingUsername;	// 0x35e482a5
- (id)urlBySettingHost:(id)host;	// 0x35e483b1
- (id)urlBySettingHost:(id)host keepUsername:(BOOL)username;	// 0x35e47dfd
- (id)urlBySettingPath:(id)path;	// 0x35e483d9
- (id)urlBySettingPath:(id)path keepUsername:(BOOL)username;	// 0x35e4805d
- (id)urlBySettingPort:(id)port;	// 0x35e483c5
- (id)urlBySettingPort:(id)port keepUsername:(BOOL)username;	// 0x35e47f25
- (id)urlBySettingScheme:(id)scheme;	// 0x35e4839d
- (id)urlBySettingScheme:(id)scheme keepUsername:(BOOL)username;	// 0x35e47cd5
- (id)urlBySettingUsername:(id)username;	// 0x35e48189
@end

@interface NSURL (DALeastInfoURLExtension)
- (id)leastInfoStringRepresentationRelativeToParentURL:(id)parentURL;	// 0x35e486f9
@end

