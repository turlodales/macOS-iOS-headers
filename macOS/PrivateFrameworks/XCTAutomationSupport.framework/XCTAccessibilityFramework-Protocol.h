//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, XCAccessibilityElement;

@protocol XCTAccessibilityFramework <NSObject>
@property(readonly) BOOL allowsRemoteAccess;
- (id)parameterizedAttribute:(NSString *)arg1 forElement:(const struct __AXUIElement *)arg2 parameter:(id)arg3 error:(id *)arg4;
- (NSArray *)attributes:(NSArray *)arg1 forElement:(const struct __AXUIElement *)arg2 error:(id *)arg3;
- (NSDictionary *)hierarchyForElement:(const struct __AXUIElement *)arg1 attributes:(NSArray *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (NSDictionary *)attributesForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 error:(id *)arg3;
@end

