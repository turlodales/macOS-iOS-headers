//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FPTransformOperation : FPActionOperation
{
    NSArray *_items;
    CDUnknownBlockType _transformCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transformCompletionBlock; // @synthesize transformCompletionBlock=_transformCompletionBlock;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)fp_prettyDescription;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)presendNotifications;
- (void)actionMain;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;

@end

