//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface KHPhotoLibraryMLHydrationQueue : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

