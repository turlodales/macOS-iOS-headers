//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WBSFormsMetadataProvider <NSObject>
@property(readonly, nonatomic) unsigned long long formCount;
- (void)enumerateFormsUsingBlock:(void (^)(struct OpaqueFormAutoFillFrame *, WBSFormMetadata *, char *))arg1;
@end

