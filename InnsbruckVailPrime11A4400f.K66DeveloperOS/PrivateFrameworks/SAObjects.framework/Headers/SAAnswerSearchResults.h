/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainSearchResults.h"

@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults {
}
@property(copy, nonatomic) NSArray *results;	// G=0x326fcb95; S=0x326fcbfd; 
+ (id)searchResults;	// 0x326fcb05
+ (id)searchResultsWithDictionary:(id)dictionary context:(id)context;	// 0x326fcb49
- (id)encodedClassName;	// 0x326fcaf9
- (id)groupIdentifier;	// 0x326fcae9
- (BOOL)requiresResponse;	// 0x326fcc65
// declared property getter: - (id)results;	// 0x326fcb95
// declared property setter: - (void)setResults:(id)results;	// 0x326fcbfd
@end
