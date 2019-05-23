//
//  AJWMemeController.h
//  MemeGenerator
//
//  Created by Austin West on 5/23/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AJWMemeController : NSObject

//name id - nsnumber url

@property (nonatomic, readonly)NSString *imageName;
@property (nonatomic, readonly)NSNumber *imageID;
@property (nonatomic, readonly)NSString *imageURL;







@end

NS_ASSUME_NONNULL_END
