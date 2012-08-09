/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBJsonStreamParserState, NSString, NSMutableArray, SBJsonTokeniser;
@protocol SBJsonStreamParserDelegate;

@interface SBJsonStreamParser : XXUnknownSuperclass {
	BOOL supportMultipleDocuments;	// 4 = 0x4
	id<SBJsonStreamParserDelegate> delegate;	// 8 = 0x8
	SBJsonTokeniser *tokeniser;	// 12 = 0xc
	NSMutableArray *stateStack;	// 16 = 0x10
	SBJsonStreamParserState *state;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	NSString *error;	// 28 = 0x1c
}
@property(assign) id<SBJsonStreamParserDelegate> delegate;	// G=0x460209; S=0x460219; @synthesize
@property(copy) NSString *error;	// G=0x4601d1; S=0x4601e5; @synthesize
@property(assign) unsigned maxDepth;	// G=0x460229; S=0x460239; @synthesize
@property(assign, nonatomic) SBJsonStreamParserState *state;	// G=0x460249; S=0x460259; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x460269; @synthesize
@property(assign) BOOL supportMultipleDocuments;	// G=0x4601b1; S=0x4601c1; @synthesize
- (id)init;	// 0x45f9f9
- (void)dealloc;	// 0x45fad9
// declared property getter: - (id)delegate;	// 0x460209
// declared property getter: - (id)error;	// 0x4601d1
- (void)handleArrayStart;	// 0x45fd3d
- (void)handleObjectStart;	// 0x45fc7d
// declared property getter: - (unsigned)maxDepth;	// 0x460229
- (void)maxDepthError;	// 0x45fbf9
- (int)parse:(id)parse;	// 0x45fdfd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x460219
// declared property setter: - (void)setError:(id)error;	// 0x4601e5
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x460239
// declared property setter: - (void)setState:(id)state;	// 0x460259
// declared property setter: - (void)setSupportMultipleDocuments:(BOOL)documents;	// 0x4601c1
// declared property getter: - (id)state;	// 0x460249
// declared property getter: - (id)stateStack;	// 0x460269
// declared property getter: - (BOOL)supportMultipleDocuments;	// 0x4601b1
- (id)tokenName:(int)name;	// 0x45fb61
@end
