//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FxPlugGroup : NSObject
{
    struct FxPlugGroupPriv *_priv;
}

+ (id)fxPlugGroupWithDescriptor:(id)arg1;
- (unsigned int)count;
- (id)fxPlugDescriptorAtIndex:(int)arg1;
- (void)addFxPlugDescriptor:(id)arg1;
- (id)descriptor;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

