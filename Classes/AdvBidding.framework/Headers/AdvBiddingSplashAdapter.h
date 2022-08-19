//
//  AdvBiddingSplashAdapter.h
//  AdvanceSDK
//
//  Created by MS on 2022/7/27.
//

#import <Foundation/Foundation.h>
#import "AdvBidding.h"
#import "AdvanceSplashDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface AdvBiddingSplashAdapter : AdvBaseAdPosition
@property (nonatomic, weak) id<AdvanceSplashDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
