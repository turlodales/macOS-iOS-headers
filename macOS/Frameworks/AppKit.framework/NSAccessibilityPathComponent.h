//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSPathComponentCell;

__attribute__((visibility("hidden")))
@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement
{
    NSPathComponentCell *_pathComponentCell;
}

+ (id)pathComponentWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsURLAttributeSettable;
- (id)accessibilityURLAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityAttributeNames;
- (id)pathComponentCell;
- (void)dealloc;
- (id)initWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3;

@end

