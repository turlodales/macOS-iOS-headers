//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSArrayDetailBinder.h>

__attribute__((visibility("hidden")))
@interface NSTreeDetailBinder : NSArrayDetailBinder
{
    struct __treeDetailBinderFlags {
        unsigned int _reservedTreeDetailBinder:32;
    } _treeDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (BOOL)isUsableWithObject:(id)arg1;
- (void)_selectAllContent:(id)arg1 inDetailController:(id)arg2;
- (BOOL)_handlesSelectAll;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

