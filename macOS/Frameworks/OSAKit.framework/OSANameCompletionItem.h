//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSAKit/OSACompletionItem-Protocol.h>

@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem>
{
    NSString *_name;
}

- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

