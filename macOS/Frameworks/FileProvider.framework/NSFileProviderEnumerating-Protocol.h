//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSFileProviderRequest, NSString;
@protocol NSFileProviderEnumerator;

@protocol NSFileProviderEnumerating <NSObject>
- (id <NSFileProviderEnumerator>)enumeratorForContainerItemIdentifier:(NSString *)arg1 request:(NSFileProviderRequest *)arg2 error:(id *)arg3;
@end

