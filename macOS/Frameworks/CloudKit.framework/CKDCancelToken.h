//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKDCancelling-Protocol.h>

@interface CKDCancelToken : NSObject <CKDCancelling>
{
    BOOL _isCancelled;
    CDUnknownBlockType _cancelAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void)cancel;
- (BOOL)isCancelled;

@end

