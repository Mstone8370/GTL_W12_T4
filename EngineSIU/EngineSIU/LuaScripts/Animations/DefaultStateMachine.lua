AnimFSM = {
    current = "Idle",
    Update = function(self, dt)
        -- self.current = "Contents/Fbx/Capoeira.fbx"

        -- self.current = "Contents/Bowser/Armature.003|Bowser_Landing"     
        --self.current = "Contents/Bowser/Armature.003|Bowser_Spin"
        -- self.current = "Contents/Bowser/Armature.002|Bowser_Hit"
        self.current = "Contents/Bowser/Armature|Armature.002|Armature.002|Bowser_Hit"
        -- self.current = "Contents/Bowser/Armature|Armature.002|Armature.002|Bowser_Hit"
        self.current = "Contents/Bowser/Armature|Bowser_Backhit" -- die
        self.current = "Contents/Bowser/Armature|Bowser_Land"
        self.current = "Contents/Bowser/Armature|Bowser_Hit3"
        self.current = "Contents/Bowser/Armature|Bowser_Spin"
        -- self.current = "Contents/Bowser/Armature.002|Bowser_Die"

        return {
            anim = self.current,
            blend = 1.0
        }
    end
}

return AnimFSM