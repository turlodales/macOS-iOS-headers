//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSDatePicker, NSPopUpButton, NSString;

@interface _AMDaysRelativeToSpecificDateRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_specificDateRangePopup;
    NSDatePicker *_datePicker;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
- (void).cxx_destruct;
@property BOOL hasCreatedViews; // @synthesize hasCreatedViews=_hasCreatedViews;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain) NSPopUpButton *specificDateRangePopup; // @synthesize specificDateRangePopup=_specificDateRangePopup;
@property(retain) NSPopUpButton *leftExpressionPopup; // @synthesize leftExpressionPopup=_leftExpressionPopup;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)arg1;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end

