//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface DDAction : NSObject
{
    NSString *_name;
    NSString *_actionUTI;
    int _type;
    BOOL _alternate;
    BOOL _isImmediate;
    BOOL _hasDynamicName;
    NSMutableArray *_actions;
}

+ (id)actionForDictionary:(id)arg1 inBundle:(id)arg2;
- (void).cxx_destruct;
@property(readonly) BOOL isImmediate; // @synthesize isImmediate=_isImmediate;
@property(readonly) BOOL alternate; // @synthesize alternate=_alternate;
@property(readonly) NSString *actionUTI; // @synthesize actionUTI=_actionUTI;
- (id)menuItemForResult:(struct __DDResult *)arg1 textCheckingResult:(id)arg2 URL:(id)arg3 uiReady:(BOOL)arg4 context:(id)arg5 actionTarget:(id)arg6;
- (id)rawMenuItemForContext:(id)arg1;
- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForTextCheckingResult:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
@property(readonly) int type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)displaysUI;
- (id)initWithDict:(id)arg1 bundle:(id)arg2;

@end

