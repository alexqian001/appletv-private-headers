/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSISVariableDelegate.h"

@class NSMapTable, NSMutableArray, NSMutableSet, NSISVariable;
@protocol NSISEngineDelegate;

@interface NSISEngine : NSObject <NSISVariableDelegate> {
	NSMapTable *_rows;	// 4 = 0x4
	NSMapTable *_rowsCrossIndex;	// 8 = 0x8
	NSISVariable *_headForObjectiveRow;	// 12 = 0xc
	NSMutableArray *_variablesWithValueRestrictionViolations;	// 16 = 0x10
	int _automaticOptimizationDisabledCount;	// 20 = 0x14
	id<NSISEngineDelegate> _delegate;	// 24 = 0x18
	int _delegateCallsDisabledCount;	// 28 = 0x1c
	NSMapTable *_brokenConstraintPositiveErrors;	// 32 = 0x20
	NSMapTable *_brokenConstraintNegativeErrors;	// 36 = 0x24
	NSMutableSet *_variablesWithIntegralizationViolations;	// 40 = 0x28
	CFDictionaryRef _integralizationAdjustmentsForConstraintMarkers;	// 44 = 0x2c
	BOOL _shouldIntegralize;	// 48 = 0x30
}
@property(assign) id<NSISEngineDelegate> delegate;	// G=0x3744f5c5; S=0x3744f5d9; @synthesize=_delegate
@property(retain) NSISVariable *headForObjectiveRow;	// G=0x3744f559; S=0x3744f56d; @synthesize=_headForObjectiveRow
@property(assign) CFDictionaryRef integralizationAdjustmentsForConstraintMarkers;	// G=0x37447f6d; S=0x37447f7d; 
@property(retain) NSMapTable *rows;	// G=0x3744f511; S=0x3744f525; @synthesize=_rows
@property(retain) NSMapTable *rowsCrossIndex;	// G=0x3744f535; S=0x3744f549; @synthesize=_rowsCrossIndex
@property(assign) BOOL shouldIntegralize;	// G=0x3744f5f1; S=0x3744f609; @synthesize=_shouldIntegralize
@property(retain) NSMutableSet *variablesWithIntegralizationViolations;	// G=0x3744f5a1; S=0x3744f5b5; @synthesize=_variablesWithIntegralizationViolations
@property(retain) NSMutableArray *variablesWithValueRestrictionViolations;	// G=0x3744f57d; S=0x3744f591; @synthesize=_variablesWithValueRestrictionViolations
- (id)init;	// 0x3744c14d
- (id)_brokenConstraintNegativeErrors;	// 0x37448499
- (id)_brokenConstraintNegativeErrorsIfAvailable;	// 0x374484ed
- (id)_brokenConstraintPositiveErrors;	// 0x37448399
- (id)_brokenConstraintPositiveErrorsIfAvailable;	// 0x374483ed
- (void)addExpression:(id)expression priority:(float)priority times:(float)times toObjectiveRowWithHead:(id)head body:(id)body;	// 0x37448dad
- (void)addExpression:(id)expression times:(float)times toRowWithHead:(id)head body:(id)body;	// 0x37448efd
- (void)addVariable:(id)variable coefficient:(float)coefficient toRowWithHead:(id)head body:(id)body;	// 0x37448c6d
- (void)addVariable:(id)variable priority:(float)priority times:(float)times toObjectiveRowWithHead:(id)head body:(id)body;	// 0x37448b1d
- (void)addVariableToBeOptimized:(id)beOptimized priority:(float)priority;	// 0x3744cc6d
- (id)allRowHeads;	// 0x374480f9
- (BOOL)bodyVarIsAmbiguous:(id)ambiguous withPivotOfOutgoingRowHead:(id *)outgoingRowHead;	// 0x3744ef45
- (id)candidateRedundantConstraints;	// 0x3744ec69
- (void)changeVariableToBeOptimized:(id)beOptimized fromPriority:(float)priority toPriority:(float)priority3;	// 0x3744cd65
- (id)chooseHeadForRowBody:(id)rowBody;	// 0x3744b6e9
- (id)chooseOutgoingRowHeadForIncomingRowHead:(id)incomingRowHead;	// 0x37449dcd
- (void)constraintDidChangeSuchThatMarker:(id)constraint shouldBeReplacedByMarkerPlusDelta:(float)delta;	// 0x3744d649
- (id)constraints;	// 0x3744dac1
- (id)constraintsAffectingValueOfVariable:(id)variable;	// 0x3744eb95
- (void)dealloc;	// 0x3744c30d
// declared property getter: - (id)delegate;	// 0x3744f5c5
- (id)description;	// 0x3744db5d
- (int)desirabilityOfAdjustingVariable:(id)adjustingVariable delta:(float)delta fixingTargetVar:(BOOL)var;	// 0x3744a7b5
- (void)enumerateOriginalConstraints:(id)constraints;	// 0x3744d9a5
- (void)enumerateRows:(id)rows;	// 0x37448005
- (void)enumerateRowsCrossIndex:(id)index;	// 0x37448195
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)marker errorIsPositive:(BOOL)positive;	// 0x3744993d
- (BOOL)exerciseAmbiguityInVariable:(id)variable;	// 0x3744f4c9
- (id)expressionBySubstitutingForRowHeadVariablesInExpression:(id)expression;	// 0x3744b591
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)head body:(id)body;	// 0x37449a19
- (void)fixUpValueRestrictionViolations;	// 0x3744a16d
- (void)fixupIntegralizationViolations;	// 0x3744acc5
- (id)handleUnsatisfiableRowWithHead:(id)head body:(id)body mutuallyExclusiveConstraints:(id *)constraints;	// 0x37449bc1
- (BOOL)hasValue:(float *)value forVariable:(id)variable;	// 0x3744c919
// declared property getter: - (id)headForObjectiveRow;	// 0x3744f559
- (BOOL)incoming:(id *)incoming andOutgoing:(id *)outgoing rowHeadsThatMakeValueAmbiguousForVariable:(id)variable;	// 0x3744f221
- (float)integralizationAdjustmentForMarker:(id)marker;	// 0x374487ed
// declared property getter: - (CFDictionaryRef)integralizationAdjustmentsForConstraintMarkers;	// 0x37447f6d
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)negativeErrorVar;	// 0x37448671
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)positiveErrorVar;	// 0x37448599
- (void)minimizeConstantInObjectiveRowWithHead:(id)head;	// 0x3744a059
- (id)negativeErrorVarForBrokenConstraintWithMarker:(id)marker;	// 0x37448515
- (id)nsis_descriptionOfVariable:(id)variable;	// 0x37448755
- (BOOL)nsis_shouldIntegralizeVariable:(id)variable;	// 0x3744874d
- (void)nsis_valueOfVariable:(id)variable didChangeInEngine:(id)engine;	// 0x37448749
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)variableIsUserObservable;	// 0x37448751
- (unsigned)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)integralizeVariable ignoringConstraintsWithMarkers:(id)markers;	// 0x3744aa15
- (void)optimize;	// 0x3744c569
- (id)outgoingRowHeadForRemovingConstraintWithMarker:(id)marker;	// 0x3744ced5
- (void)pivotToMakeBodyVar:(id)makeBodyVar newHeadOfRowWithHead:(id)head;	// 0x37449489
- (id)positiveErrorVarForBrokenConstraintWithMarker:(id)marker;	// 0x37448415
- (void)rawRemoveRowWithHead:(id)head;	// 0x37448155
- (void)rawSetRowWithHead:(id)head body:(id)body;	// 0x37448131
- (void)removeBodyVarFromAllRows:(id)allRows;	// 0x37448a29
- (void)removeConstraintWithMarker:(id)marker;	// 0x3744d395
- (void)removeRowWithHead:(id)head;	// 0x374488d9
- (void)removeVariableToBeOptimized:(id)beOptimized priority:(float)priority;	// 0x3744ccc9
- (void)replaceMarker:(id)marker withMarkerPlusCoefficient:(float)markerPlusCoefficient timesVariable:(id)variable;	// 0x374496ed
- (id)rowBodyForHead:(id)head;	// 0x37447fa5
- (id)rowBodyForNonObjectiveHead:(id)nonObjectiveHead;	// 0x37447fc5
- (id)rowBodyForObjectiveHead:(id)objectiveHead;	// 0x37447fe5
- (void)rowCrossIndexNoteBodyVariable:(id)variable wasAddedToRowWithHead:(id)head;	// 0x3744827d
- (void)rowCrossIndexNoteBodyVariable:(id)variable wasRemovedFromRowWithHead:(id)head;	// 0x374482fd
- (void)rowCrossIndexNoteDroppedBodyVar:(id)var;	// 0x37448379
- (id)rowHeadsForRowsContainingBodyVar:(id)rowsContainingBodyVar;	// 0x37448175
// declared property getter: - (id)rows;	// 0x3744f511
// declared property getter: - (id)rowsCrossIndex;	// 0x3744f535
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3744f5d9
// declared property setter: - (void)setHeadForObjectiveRow:(id)objectiveRow;	// 0x3744f56d
- (void)setIntegralizationAdjustment:(float)adjustment forMarker:(id)marker;	// 0x37448801
// declared property setter: - (void)setIntegralizationAdjustmentsForConstraintMarkers:(CFDictionaryRef)constraintMarkers;	// 0x37447f7d
- (void)setNegativeErrorVar:(id)var forBrokenConstraintWithMarker:(id)marker;	// 0x37448541
- (void)setPositiveErrorVar:(id)var forBrokenConstraintWithMarker:(id)marker;	// 0x37448441
- (void)setRowWithHead:(id)head body:(id)body;	// 0x37448815
// declared property setter: - (void)setRows:(id)rows;	// 0x3744f525
// declared property setter: - (void)setRowsCrossIndex:(id)index;	// 0x3744f549
// declared property setter: - (void)setShouldIntegralize:(BOOL)integralize;	// 0x3744f609
// declared property setter: - (void)setVariablesWithIntegralizationViolations:(id)integralizationViolations;	// 0x3744f5b5
// declared property setter: - (void)setVariablesWithValueRestrictionViolations:(id)valueRestrictionViolations;	// 0x3744f591
// declared property getter: - (BOOL)shouldIntegralize;	// 0x3744f5f1
- (void)substituteOutAllOccurencesOfBodyVar:(id)bodyVar withExpression:(id)expression;	// 0x3744903d
- (BOOL)tryAddingDirectly:(id)directly;	// 0x3744bbc9
- (BOOL)tryToAddConstraintWithMarker:(id)marker expression:(id)expression integralizationAdjustment:(float)adjustment mutuallyExclusiveConstraints:(id *)constraints;	// 0x3744c9d9
- (BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(id)marker rowBody:(id)body mutuallyExclusiveConstraints:(id *)constraints;	// 0x3744bd45
- (float)valueForVariable:(id)variable;	// 0x3744c8f1
- (float)valueForVariableWithoutIntegralizationAdjustments:(id)variableWithoutIntegralizationAdjustments;	// 0x3744a5c1
- (BOOL)valueOfVariableIsAmbiguous:(id)variableIsAmbiguous;	// 0x3744f4a9
- (id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)integralizationViolationsIgnoringLostCauses varsAlreadyAdjusted:(id)adjusted;	// 0x3744abc1
// declared property getter: - (id)variablesWithIntegralizationViolations;	// 0x3744f5a1
// declared property getter: - (id)variablesWithValueRestrictionViolations;	// 0x3744f57d
- (void)verifyInternalIntegrity;	// 0x3744ded5
- (void)withAutomaticOptimizationDisabled:(id)automaticOptimizationDisabled;	// 0x3744c5c1
- (void)withDelegateCallsDisabled:(id)delegateCallsDisabled;	// 0x3744c809
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id)automaticOptimizationDisabled;	// 0x3744c721
@end

