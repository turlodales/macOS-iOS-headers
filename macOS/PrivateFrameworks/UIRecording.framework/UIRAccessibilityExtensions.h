//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIRAccessibilityExtensions : NSObject
{
}

+ (id)imageForUIElement:(struct __AXUIElement *)arg1;
+ (void)grab:(struct CGRect)arg1 windowNum:(unsigned int)arg2;
+ (BOOL)_verifyGrabbingIsEnabledAndAlertIfNecessary:(BOOL)arg1;
+ (id)englishNameOfUIElement:(struct __AXUIElement *)arg1;
+ (id)englishDescriptionFormatStringWithUIElement:(struct __AXUIElement *)arg1;
+ (id)englishDescriptionForAction:(id)arg1 withUIElement:(struct __AXUIElement *)arg2;
+ (BOOL)validateTitle:(id)arg1;
+ (id)actionsForElementRef:(struct __AXUIElement *)arg1;
+ (id)valueOfExistingAttribute:(struct __CFString *)arg1 ofUIElement:(struct __AXUIElement *)arg2;
+ (id)descriptionForUIEventWithChildrenStack:(id)arg1 outHTML:(id *)arg2;
+ (id)textForUIElement:(struct __AXUIElement *)arg1 outHTML:(id *)arg2;
+ (BOOL)isRoleContainer:(id)arg1;
+ (id)UIElementRoleDescriptionsForRoles;
+ (id)UIElementDictionary;

@end

