//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICFlowControl.h"

@interface ICFlowControlBasic : NSObject <ICFlowControl>
{
    CDUnknownBlockType shouldBeCanceled;
    CDUnknownBlockType reportProgress;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reportProgress; // @synthesize reportProgress;
@property(copy, nonatomic) CDUnknownBlockType shouldBeCanceled; // @synthesize shouldBeCanceled;
- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (id)initWithProgress:(CDUnknownBlockType)arg1;
- (id)initWithCancel:(CDUnknownBlockType)arg1;

@end

