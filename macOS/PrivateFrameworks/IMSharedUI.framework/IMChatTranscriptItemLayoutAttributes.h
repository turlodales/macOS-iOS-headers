//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath;

@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying>
{
    NSIndexPath *_indexPath;
    struct CGSize _size;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

