/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CALExtensions)
+ (id)davCompatibleFilenameForFilename:(id)filename;	// 0x3358f0d1
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)filename;	// 0x3358f1b1
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port path:(id)path;	// 0x3358f3e9
- (id)URLByRemovingLastPathComponent;	// 0x3358f2a5
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x3358eea1
- (BOOL)isEqualToURL:(id)url;	// 0x3358f635
- (id)lastPathComponent;	// 0x3358f39d
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// 0x3358f6f9
- (id)pathWithoutTrailingRemovingSlash;	// 0x3358f66d
- (id)queryParameters;	// 0x3358ed19
- (id)serverURL;	// 0x3358f565
- (id)unquotedPassword;	// 0x3358f539
@end

@interface NSURL (DAVExtensions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x3358fa81
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x3358f9a5
+ (int)classicPortForScheme:(id)scheme;	// 0x3358f951
- (id)initWithDirtyString:(id)dirtyString;	// 0x3358fac9
- (id)URLWithUsername:(id)username;	// 0x3358fe2d
- (id)URLWithoutPassword;	// 0x33590095
- (id)URLWithoutUsername;	// 0x3358ffdd
- (BOOL)absoluteURLisEqual:(id)equal;	// 0x335900dd
- (id)uri;	// 0x3358fd8d
@end

