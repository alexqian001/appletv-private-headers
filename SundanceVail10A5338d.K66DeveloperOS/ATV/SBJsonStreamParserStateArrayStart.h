/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateArrayStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x460e31
- (id)name;	// 0x460e6d
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x460e79
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x460e85
@end
