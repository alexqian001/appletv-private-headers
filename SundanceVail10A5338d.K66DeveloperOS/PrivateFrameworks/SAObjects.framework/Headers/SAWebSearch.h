/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SAWebSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *provider;	// G=0x379624e1; S=0x379624fd; 
@property(copy, nonatomic) NSString *query;	// G=0x3796254d; S=0x37962569; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x37962405; S=0x37962481; 
+ (id)search;	// 0x37962375
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x379623b9
- (id)encodedClassName;	// 0x37962369
- (id)groupIdentifier;	// 0x37962359
// declared property getter: - (id)provider;	// 0x379624e1
// declared property getter: - (id)query;	// 0x3796254d
- (BOOL)requiresResponse;	// 0x379625b9
// declared property setter: - (void)setProvider:(id)provider;	// 0x379624fd
// declared property setter: - (void)setQuery:(id)query;	// 0x37962569
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37962481
// declared property getter: - (id)targetAppId;	// 0x37962405
@end
